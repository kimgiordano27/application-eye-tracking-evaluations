/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox3D
ENTRY_POINT: 0339f5a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox3D
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6,uint param_7,uint param_8,undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_045336d2 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_RemoveWhere__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<float>__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Current__
                );
    DAT_045336d2 = 1;
  }
  param_10 = 0;
  if (param_7 < 2) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(char *)(param_6 + 0x80) == '\0') {
      uVar7 = *(ulong *)(param_6 + 0x10);
      if ((uVar7 & 0xff) == 0) {
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar7 = *(ulong *)(param_4 + 200);
      }
      iVar6 = (int)(uVar7 >> 0x20);
      if (param_7 == 0) {
        if (iVar6 - 1U < 2) {
          lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_03295500(0);
          uVar10 = *(undefined8 *)(param_6 + 0x30);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<RTHandle>__ctor__);
          uVar3 = FUN_0336f2b8(uVar4,uVar3,uVar10,0);
          uVar3 = FUN_0335cdc4(param_3,uVar3,0);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar4);
        }
        if ((param_8 & 1) != 0) {
          if (*(long *)(param_6 + 0x48) == 0) {
            uVar3 = FUN_03395dc8(param_1,*(undefined8 *)(param_6 + 0x40));
            *(undefined8 *)(param_6 + 0x48) = uVar3;
          }
          param_10 = *(undefined8 *)(param_6 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar1 = FUN_02f211a0(&param_10,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if (((uVar1 >> 1 & 1) != 0) && (*(char *)(param_6 + 0x82) != '\0')) {
            plVar9 = *(long **)(param_6 + 0x68);
            uVar3 = FUN_033931b0(param_6);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar4 = FUN_03295500(0);
            uVar3 = FUN_033985d4(uVar4,param_3,uVar3,uVar4,*(undefined8 *)(param_6 + 0x48),
                                 *(undefined8 *)(param_6 + 0x40));
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar2 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0339f7d8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01c72498(plVar9,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,0);
LAB_0339f7d8:
            (*(code *)*puVar5)(plVar9,param_2,uVar3,puVar5[1]);
          }
        }
      }
      else {
        if (iVar6 == 3) {
          lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_03295500(0);
          uVar10 = *(undefined8 *)(param_6 + 0x30);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_get_Count__);
          uVar3 = FUN_0336f2b8(uVar4,uVar3,uVar10,0);
          uVar3 = FUN_0335cdc4(param_3,uVar3,0);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar4);
        }
        if (iVar6 == 2) {
          lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_03295500(0);
          uVar10 = *(undefined8 *)(param_6 + 0x30);
          uVar4 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<Player>_GetEnumerator__
                                    );
          uVar3 = FUN_0336f2b8(uVar4,uVar3,uVar10,0);
          uVar3 = FUN_0335cdc4(param_3,uVar3,0);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar4);
        }
      }
    }
  }
  return;
}



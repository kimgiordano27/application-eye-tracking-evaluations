/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.TrackedPoseDriver$$BindPosition
ENTRY_POINT: 05cfe614
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05cfeb20) */

long UnityEngine_InputSystem_XR_TrackedPoseDriver__BindPosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  undefined4 uVar14;
  long unaff_x24;
  long unaff_x25;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x448));
  FUN_02d965b8(PTR_DAT_069fbff0);
  FUN_02d965b8(PTR_DAT_069fbff8);
  FUN_02d965b8(
              Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
              );
  *(undefined1 *)(unaff_x24 + 0xe19) = 1;
  lVar6 = thunk_FUN_02dd3144(*unaff_x19);
  FUN_05cfac90();
  puVar3 = OVRPlugin_OVRP_1_115_0_TypeInfo;
  if (unaff_x25 != 0) {
    lVar15 = 0;
    uVar16 = 0;
    uVar14 = 0;
    do {
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar3;
      }
      lVar12 = **(long **)(lVar7 + 0xb8);
      if (lVar12 == 0) goto LAB_05cfeb0c;
      if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar16) goto LAB_05cfe72c;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar12 == 0) goto LAB_05cfeb0c;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_05cfe7f4;
      iVar5 = FUN_0536a4b0();
      if (iVar5 == 0) {
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_05cfeb0c;
        if (*(uint *)(lVar7 + 0x18) <= uVar16) {
LAB_05cfe7f4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar14 = *(undefined4 *)(lVar7 + lVar15 + 0x28);
      }
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x10;
    } while( true );
  }
  uVar14 = 2;
LAB_05cfe72c:
  puVar3 = Method_System_Collections_Generic_HashSet<PropertyPath>_Add__;
  if (unaff_x22 != 0) {
    FUN_05c0b888();
    FUN_05cfe308();
    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05cfa4e8();
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
    ;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    while (lVar7 = FUN_05cfa560(lVar15),
          puVar4 = 
          Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__,
          puVar2 = PTR_DAT_069fbff8, puVar1 = PTR_DAT_069fbff0, lVar7 != 0) {
      uVar17 = *(undefined8 *)(lVar7 + 0x40);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar16 = FUN_05ceb584(uVar17,0);
      if ((uVar16 & 1) == 0) {
        uVar16 = FUN_05cf801c(lVar7,uVar14);
        if ((uVar16 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_05cfb6a8(lVar6,lVar7,1);
        }
      }
      else if ((unaff_x20 & 1) != 0) {
        uVar17 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<PropertyPath>_Clear__)
        ;
        uVar17 = FUN_0534f2b4(uVar17,0);
        thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<NetworkObject>_Contains__);
        uVar8 = thunk_FUN_02dd3144();
        FUN_054d078c(uVar8,uVar17,0);
        uVar17 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_HashSet<PropertyPath>_GetEnumerator__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar17);
      }
    }
    if (lVar6 != 0) {
      plVar9 = (long *)FUN_05cfb52c(lVar6);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *plVar9;
        lVar15 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05cfe9c8;
            }
            uVar16 = uVar16 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar15,0);
LAB_05cfe9c8:
        uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar16 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_02dd3048(plVar9,*(undefined8 *)puVar1);
          if (plVar9 == (long *)0x0) {
            return lVar6;
          }
          lVar7 = *plVar9;
          lVar15 = *(long *)puVar1;
          uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar16 == 0) goto LAB_05cfeabc;
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_05cfeaa4;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *plVar9;
        lVar15 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_05cfea30;
            }
            uVar16 = uVar16 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar15,1);
LAB_05cfea30:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar11);
        }
        FUN_05cfbf74();
      } while( true );
    }
  }
LAB_05cfeb0c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar13 = piVar13 + 4;
    if (uVar16 == 0) break;
LAB_05cfeaa4:
    if (*(long *)(piVar13 + -2) == lVar15) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_05cfead8;
    }
  }
LAB_05cfeabc:
  puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar15,0);
LAB_05cfead8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return lVar6;
}



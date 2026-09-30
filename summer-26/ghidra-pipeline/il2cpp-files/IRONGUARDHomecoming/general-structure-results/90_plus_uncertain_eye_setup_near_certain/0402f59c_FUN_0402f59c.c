/*
FUNCTION_NAME: FUN_0402f59c
ENTRY_POINT: 0402f59c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0402f718) */

long FUN_0402f59c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04586450;
  if ((DAT_0483c585 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Add__);
    thunk_FUN_01efb3a4(PTR_DAT_04586450);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<bool>__ctor__);
    DAT_0483c585 = 1;
  }
  plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
  if (*plVar3 == 0) {
    plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                                       );
    uVar7 = *(undefined8 *)
             Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__;
    FUN_035ac8e8(plVar3,0);
    FUN_0402d3ac(plVar3,uVar7);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_02159f84(plVar3,*(undefined8 *)Method_System_Collections_Generic_Queue<bool>__ctor__
                         ,*(undefined8 *)
                           Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Add__);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar7;
    thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0402f6e8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0402f6e8:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
  }
  return *plVar3;
}



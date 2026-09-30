/*
FUNCTION_NAME: FUN_034e3e34
ENTRY_POINT: 034e3e34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_034e3e34(long param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  if ((DAT_04832dd9 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832dd9 = 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = FUN_03412ab4(param_1,0);
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (lVar4 == 0) goto LAB_034e425c;
  if (*(int *)(lVar4 + 0x10) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>__
                              );
    FUN_034f6754(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_034e38c0(param_1);
  if ((uVar5 & 1) == 0) {
LAB_034e4020:
    uVar6 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
  else {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    if (*(short *)(*(long *)(lVar4 + 0xb8) + 10) == 0x2f) {
      uVar3 = FUN_03409f80(param_1,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar5 = FUN_034db014(uVar3);
      if ((uVar5 & 1) == 0) goto LAB_034e4020;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 == 1) {
        uVar3 = FUN_03409f80(param_1,0,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar5 = FUN_034db014(uVar3);
        if ((uVar5 & 1) != 0) goto LAB_034e406c;
        iVar9 = *(int *)(param_1 + 0x10);
      }
      if (iVar9 < 2) goto LAB_034e4020;
      uVar3 = FUN_03409f80(param_1,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar5 = FUN_034db014(uVar3);
      if ((uVar5 & 1) != 0) {
        uVar3 = FUN_03409f80(param_1,1,0);
                    /* try { // try from 034e3fb0 to 035e3fb3 has its CatchHandler @ 034e3fc4 */
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 034e3fb4 to 035e3fdb has its CatchHandler @ 034e3a44 */
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034e3b68 with catch @ 034e3fbc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034e3b5c with catch @ 034e3fc0
                        */
        uVar5 = FUN_034db014(uVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034e3fb0 with catch @ 034e3fc4
                        */
        if ((uVar5 & 1) != 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          iVar9 = 2;
          if (2 < iVar8) {
            do {
                    /* try { // try from 034e3fdc to 035e3fdf has its CatchHandler @ 034e3ff4 */
              uVar3 = FUN_03409f80(param_1,iVar9,0);
                    /* catch() { ... } // from try @ 034e3fdc with catch @ 034e3ff4 */
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar1);
              }
              uVar5 = FUN_034db014(uVar3);
              if ((uVar5 & 1) != 0) {
                iVar8 = *(int *)(param_1 + 0x10);
                break;
              }
              iVar8 = *(int *)(param_1 + 0x10);
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
          }
          if (iVar9 < iVar8) {
            while (iVar9 = iVar9 + 1, iVar9 < iVar8) {
              uVar3 = FUN_03409f80(param_1,iVar9,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar1);
              }
              uVar5 = FUN_034db014(uVar3);
              if ((uVar5 & 1) != 0) break;
              iVar8 = *(int *)(param_1 + 0x10);
            }
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *(long *)puVar1;
          }
          uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
          lVar4 = FUN_03410500(param_1,2,iVar9 + -2,0);
          if (lVar4 != 0) {
            uVar7 = FUN_03410698(lVar4,*(undefined2 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                 *(undefined2 *)(*(long *)(*(long *)puVar1 + 0xb8) + 10),0);
            uVar6 = FUN_0340ebc0(uVar6,uVar6,uVar7,0);
            return uVar6;
          }
          goto LAB_034e425c;
        }
      }
      uVar3 = FUN_03409f80(param_1,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar5 = FUN_034db014(uVar3);
      if ((uVar5 & 1) == 0) {
        sVar2 = FUN_03409f80(param_1,1,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar4);
          lVar4 = *(long *)puVar1;
        }
        if (*(short *)(*(long *)(lVar4 + 0xb8) + 0x18) == sVar2) {
          if (*(int *)(param_1 + 0x10) < 3) {
            uVar3 = 2;
          }
          else {
            uVar3 = FUN_03409f80(param_1,2,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar1);
            }
            uVar5 = FUN_034db014(uVar3);
            uVar3 = 2;
            if ((uVar5 & 1) != 0) {
              uVar3 = 3;
            }
          }
        }
        else {
          param_1 = FUN_035b0494(0);
          if (param_1 == 0) {
LAB_034e425c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar3 = 2;
        }
        uVar6 = FUN_03410500(param_1,0,uVar3,0);
        return uVar6;
      }
    }
LAB_034e406c:
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  }
  return uVar6;
}



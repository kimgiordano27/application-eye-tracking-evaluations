/*
FUNCTION_NAME: FUN_0279303c
ENTRY_POINT: 0279303c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0279303c(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 local_48 [2];
  
  if ((DAT_044a422e & 1) == 0) {
    FUN_01d7d918(StringLiteral_887);
    DAT_044a422e = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc(param_2,0);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_02b149a0(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - param_3) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01dde7f8(lVar8);
    }
    lVar8 = thunk_FUN_01de26bc(param_2,lVar8);
    if (lVar8 != 0) {
      System_Linq_Enumerable_WhereSelectArrayIterator<NameAndParameters,_Vector3>__Clone
                (param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
      return;
    }
    plVar4 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = 0;
        puVar10 = (undefined4 *)(lVar8 + 0x30);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < (int)puVar10[-4]) {
            local_48[0] = *puVar10;
            lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40),
                                       local_48);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar4[(long)(int)param_3 + 4] = lVar5;
            thunk_FUN_01e10808(plVar4 + (long)(int)param_3 + 4,lVar5);
            param_3 = param_3 + 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 6;
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}



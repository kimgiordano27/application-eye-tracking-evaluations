/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 03e57630
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_38;
  
  if ((DAT_06bb4fa0 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc130);
    DAT_06bb4fa0 = 1;
  }
  lVar1 = *(long *)(param_3 + 0x20);
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_3 + 0x20);
    uVar4 = *param_1;
    uVar5 = param_1[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    uVar3 = FUN_047fcd2c(lVar1,uVar4,uVar5,&local_38,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0)
                        );
    lVar1 = local_38;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 != 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        uVar3 = FUN_047fcd2c(lVar1,uVar4,uVar5,&local_48,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
        lVar1 = local_48;
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          uVar3 = FUN_03e57a88(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xf0));
          if ((uVar3 & 1) == 0) {
            uStack_58 = param_1[1];
            local_60 = *param_1;
            uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067caa20);
            uVar4 = thunk_FUN_02f44ec4(uVar4,&local_60);
            uVar5 = thunk_FUN_02f6ef30(PTR_DAT_067cc138);
            uVar4 = FUN_04f70018(uVar5,param_2,uVar4,0);
            thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
            uVar5 = thunk_FUN_02f45270();
            FUN_050d5428(uVar5,uVar4,param_2,0);
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar5,param_3);
          }
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
          if (lVar1 != 0) {
            lVar2 = *(long *)(param_3 + 0x20);
            uVar4 = *param_1;
            uVar5 = param_1[1];
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_02f41e9c();
            }
            uVar3 = FUN_047fcd2c(lVar1,uVar4,uVar5,&local_50,
                                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
            if ((uVar3 & 1) != 0) {
              lVar1 = FUN_05005f4c(param_2,0);
              if (lVar1 == 0) goto LAB_03e57a14;
              FUN_0500600c(lVar1,0);
            }
            lVar1 = *(long *)(param_3 + 0x20);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02f41e9c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02f41e9c();
            }
            if (*(int *)(lVar1 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            lVar1 = *(long *)(param_3 + 0x20);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02f41e9c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02f41e9c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
            if (lVar1 != 0) {
              FUN_047fb5f4(lVar1,*param_1,param_1[1],param_2,*(undefined8 *)PTR_DAT_067cc130);
              lVar1 = *(long *)(param_3 + 0x20);
              if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_02f41e9c();
              }
              FUN_03e57d0c(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x108));
              return;
            }
          }
        }
        else if (local_48 != 0) {
          lVar2 = *(long *)(param_3 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02f41e9c();
          }
          FUN_04319f90(lVar1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xe8));
          return;
        }
      }
    }
    else if (local_38 != 0) {
      lVar2 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c();
      }
      FUN_03d7ed64(lVar1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200));
      return;
    }
  }
LAB_03e57a14:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



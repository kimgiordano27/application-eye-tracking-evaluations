/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 03e576a0
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000018;
  long in_stack_00000028;
  
  lVar1 = FUN_02f41e9c();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x21;
    uVar5 = unaff_x21[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    uVar3 = FUN_047fcd2c(lVar1,uVar4,uVar5,&stack0x00000028,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0));
    lVar1 = in_stack_00000028;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
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
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02f41e9c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *unaff_x21;
        uVar5 = unaff_x21[1];
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        uVar3 = FUN_047fcd2c(lVar1,uVar4,uVar5,&stack0x00000018,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
        lVar1 = in_stack_00000018;
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(unaff_x20 + 0x20);
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
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02f41e9c();
          }
          uVar3 = FUN_03e57a88();
          if ((uVar3 & 1) == 0) {
            thunk_FUN_02f6ef30(PTR_DAT_067caa20);
            thunk_FUN_02f44ec4();
            thunk_FUN_02f6ef30(PTR_DAT_067cc138);
            uVar4 = FUN_04f70018();
            thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
            uVar5 = thunk_FUN_02f45270();
            FUN_050d5428(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar5);
          }
          lVar1 = *(long *)(unaff_x20 + 0x20);
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
          lVar1 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
          if (lVar1 != 0) {
            lVar2 = *(long *)(unaff_x20 + 0x20);
            uVar4 = *unaff_x21;
            uVar5 = unaff_x21[1];
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_02f41e9c();
            }
            uVar3 = FUN_047fcd2c(lVar1,uVar4,uVar5,&stack0x00000010,
                                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
            if ((uVar3 & 1) != 0) {
              lVar1 = FUN_05005f4c();
              if (lVar1 == 0) goto LAB_03e57a14;
              FUN_0500600c(lVar1,0);
            }
            lVar1 = *(long *)(unaff_x20 + 0x20);
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
            lVar1 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02f41e9c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
            if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02f41e9c();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
            if (lVar1 != 0) {
              FUN_047fb5f4(lVar1,*unaff_x21,unaff_x21[1]);
              if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                FUN_02f41e9c();
              }
              FUN_03e57d0c();
              return;
            }
          }
        }
        else if (in_stack_00000018 != 0) {
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02f41e9c();
          }
          FUN_04319f90(lVar1);
          return;
        }
      }
    }
    else if (in_stack_00000028 != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      FUN_03d7ed64(lVar1);
      return;
    }
  }
LAB_03e57a14:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



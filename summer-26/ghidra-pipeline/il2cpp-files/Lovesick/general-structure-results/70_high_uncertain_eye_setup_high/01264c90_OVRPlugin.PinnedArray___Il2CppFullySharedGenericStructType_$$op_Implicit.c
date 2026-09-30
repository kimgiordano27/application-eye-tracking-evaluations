/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 01264c90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *__src;
  long lVar6;
  long lVar7;
  long in_x9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x21;
  void *unaff_x24;
  long *plVar8;
  long unaff_x26;
  long unaff_x29;
  undefined4 uVar9;
  
  memcpy(unaff_x24,unaff_x20,unaff_x21);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  uVar3 = thunk_FUN_00d61fa0();
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c(lVar6);
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  uVar1 = *(ushort *)(lVar7 + 0x132);
  lVar6 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
    uVar1 = *(ushort *)(lVar6 + 0x132);
  }
  plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_00d5941c(lVar6);
  }
  puVar2 = StringLiteral_7349;
  plVar4 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x198))();
    uVar5 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x29 + -0x68) = uVar9;
    *(undefined4 *)(unaff_x29 + -100) = param_2;
    *(undefined4 *)(unaff_x29 + -0x60) = param_3;
    *(undefined4 *)(unaff_x29 + -0x5c) = param_4;
    uVar5 = thunk_FUN_00d61fa0(uVar5,unaff_x29 + -0x68);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x338))(plVar8,uVar3,uVar5,0,*(undefined8 *)(*plVar8 + 0x340));
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
      uVar1 = *(ushort *)(lVar7 + 0x132);
      lVar6 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
        uVar1 = *(ushort *)(lVar6 + 0x132);
      }
      plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x18);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_00d5941c(lVar6);
      }
      plVar4 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
      if (plVar4 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar4 + 0x198))();
        uVar5 = *(undefined8 *)puVar2;
        *(undefined4 *)(unaff_x29 + -0x78) = uVar9;
        *(undefined4 *)(unaff_x29 + -0x74) = param_2;
        *(undefined4 *)(unaff_x29 + -0x70) = param_3;
        *(undefined4 *)(unaff_x29 + -0x6c) = param_4;
        uVar5 = thunk_FUN_00d61fa0(uVar5,unaff_x29 + -0x78);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x338))(plVar8,uVar3,uVar5,0,*(undefined8 *)(*plVar8 + 0x340));
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
          uVar1 = *(ushort *)(lVar7 + 0x132);
          lVar6 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
            uVar1 = *(ushort *)(lVar6 + 0x132);
          }
          plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x20);
          if ((uVar1 & 1) == 0) {
            lVar6 = FUN_00d5941c(lVar6);
          }
          plVar4 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
          if (plVar4 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar4 + 0x198))();
            uVar5 = *(undefined8 *)puVar2;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar9;
            *(undefined4 *)(unaff_x29 + -0x84) = param_2;
            *(undefined4 *)(unaff_x29 + -0x80) = param_3;
            *(undefined4 *)(unaff_x29 + -0x7c) = param_4;
            uVar5 = thunk_FUN_00d61fa0(uVar5,unaff_x29 + -0x88);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x338))(plVar8,uVar3,uVar5,0,*(undefined8 *)(*plVar8 + 0x340));
              lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
              uVar1 = *(ushort *)(lVar7 + 0x132);
              lVar6 = lVar7;
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
                lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                uVar1 = *(ushort *)(lVar6 + 0x132);
              }
              plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar6 = FUN_00d5941c(lVar6);
              }
              plVar4 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
              if (plVar4 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar4 + 0x198))();
                uVar5 = *(undefined8 *)puVar2;
                *(undefined4 *)(unaff_x29 + -0x98) = uVar9;
                *(undefined4 *)(unaff_x29 + -0x94) = param_2;
                *(undefined4 *)(unaff_x29 + -0x90) = param_3;
                *(undefined4 *)(unaff_x29 + -0x8c) = param_4;
                uVar5 = thunk_FUN_00d61fa0(uVar5,unaff_x29 + -0x98);
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x338))
                            (plVar8,uVar3,uVar5,0,*(undefined8 *)(*plVar8 + 0x340));
                  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                  uVar1 = *(ushort *)(lVar7 + 0x132);
                  lVar6 = lVar7;
                  if ((uVar1 & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                    uVar1 = *(ushort *)(lVar6 + 0x132);
                  }
                  plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x30);
                  if ((uVar1 & 1) == 0) {
                    lVar6 = FUN_00d5941c(lVar6);
                  }
                  puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  if ((long *)**(long **)(lVar6 + 0xb8) != (long *)0x0) {
                    uVar9 = (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x198))();
                    uVar5 = *(undefined8 *)puVar2;
                    *(undefined4 *)(unaff_x29 + -0x9c) = uVar9;
                    uVar5 = thunk_FUN_00d61fa0(uVar5,unaff_x29 + -0x9c);
                    if (plVar8 != (long *)0x0) {
                      (**(code **)(*plVar8 + 0x338))
                                (plVar8,uVar3,uVar5,0,*(undefined8 *)(*plVar8 + 0x340));
                      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                      uVar1 = *(ushort *)(lVar7 + 0x132);
                      lVar6 = lVar7;
                      if ((uVar1 & 1) == 0) {
                        lVar7 = FUN_00d5941c(lVar7);
                        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                        uVar1 = *(ushort *)(lVar6 + 0x132);
                      }
                      plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x38);
                      if ((uVar1 & 1) == 0) {
                        lVar6 = FUN_00d5941c(lVar6);
                      }
                      if ((long *)**(long **)(lVar6 + 0xb8) != (long *)0x0) {
                        uVar9 = (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x198))();
                        uVar5 = *(undefined8 *)puVar2;
                        *(undefined4 *)(unaff_x29 + -0xa0) = uVar9;
                        uVar5 = thunk_FUN_00d61fa0(uVar5,unaff_x29 + -0xa0);
                        if (plVar8 != (long *)0x0) {
                          (**(code **)(*plVar8 + 0x338))
                                    (plVar8,uVar3,uVar5,0,*(undefined8 *)(*plVar8 + 0x340));
                          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
                          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                            lVar6 = FUN_00d5941c(lVar6);
                          }
                          __src = (void *)FUN_00da5060(uVar3,lVar6,(long)unaff_x24 - in_x9);
                          memcpy(unaff_x20,__src,unaff_x21);
                          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8
                                                  ) + 0x132) & 1) == 0) {
                            FUN_00d5941c();
                          }
                          if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
                            __stack_chk_fail();
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 01264c60
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__src;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  void *unaff_x20;
  ulong __n;
  undefined1 *__dest;
  long *plVar11;
  long unaff_x26;
  long unaff_x29;
  undefined4 uVar12;
  
  lVar4 = FUN_00d5941c();
  if (*(int *)(lVar4 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar8 = iVar3 - 0x10;
  }
  else {
    uVar8 = 8;
  }
  __n = (ulong)uVar8;
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar10;
  memcpy(__dest,unaff_x20,__n);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  uVar5 = thunk_FUN_00d61fa0(lVar4,__dest);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  uVar1 = *(ushort *)(lVar9 + 0x132);
  lVar4 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_00d5941c(lVar9);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
  }
  puVar2 = StringLiteral_7349;
  plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x198))();
    uVar7 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x29 + -0x68) = uVar12;
    *(undefined4 *)(unaff_x29 + -100) = param_2;
    *(undefined4 *)(unaff_x29 + -0x60) = param_3;
    *(undefined4 *)(unaff_x29 + -0x5c) = param_4;
    uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0x68);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x338))(plVar11,uVar5,uVar7,0,*(undefined8 *)(*plVar11 + 0x340));
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
      uVar1 = *(ushort *)(lVar9 + 0x132);
      lVar4 = lVar9;
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
        uVar1 = *(ushort *)(lVar4 + 0x132);
      }
      plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x18);
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_00d5941c(lVar4);
      }
      plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
      if (plVar6 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar6 + 0x198))();
        uVar7 = *(undefined8 *)puVar2;
        *(undefined4 *)(unaff_x29 + -0x78) = uVar12;
        *(undefined4 *)(unaff_x29 + -0x74) = param_2;
        *(undefined4 *)(unaff_x29 + -0x70) = param_3;
        *(undefined4 *)(unaff_x29 + -0x6c) = param_4;
        uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0x78);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x338))(plVar11,uVar5,uVar7,0,*(undefined8 *)(*plVar11 + 0x340));
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          lVar4 = lVar9;
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_00d5941c(lVar9);
            lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
            uVar1 = *(ushort *)(lVar4 + 0x132);
          }
          plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x20);
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_00d5941c(lVar4);
          }
          plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
          if (plVar6 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar6 + 0x198))();
            uVar7 = *(undefined8 *)puVar2;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar12;
            *(undefined4 *)(unaff_x29 + -0x84) = param_2;
            *(undefined4 *)(unaff_x29 + -0x80) = param_3;
            *(undefined4 *)(unaff_x29 + -0x7c) = param_4;
            uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0x88);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x338))
                        (plVar11,uVar5,uVar7,0,*(undefined8 *)(*plVar11 + 0x340));
              lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
              uVar1 = *(ushort *)(lVar9 + 0x132);
              lVar4 = lVar9;
              if ((uVar1 & 1) == 0) {
                lVar9 = FUN_00d5941c(lVar9);
                lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                uVar1 = *(ushort *)(lVar4 + 0x132);
              }
              plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar4 = FUN_00d5941c(lVar4);
              }
              plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
              if (plVar6 != (long *)0x0) {
                uVar12 = (**(code **)(*plVar6 + 0x198))();
                uVar7 = *(undefined8 *)puVar2;
                *(undefined4 *)(unaff_x29 + -0x98) = uVar12;
                *(undefined4 *)(unaff_x29 + -0x94) = param_2;
                *(undefined4 *)(unaff_x29 + -0x90) = param_3;
                *(undefined4 *)(unaff_x29 + -0x8c) = param_4;
                uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0x98);
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x338))
                            (plVar11,uVar5,uVar7,0,*(undefined8 *)(*plVar11 + 0x340));
                  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                  uVar1 = *(ushort *)(lVar9 + 0x132);
                  lVar4 = lVar9;
                  if ((uVar1 & 1) == 0) {
                    lVar9 = FUN_00d5941c(lVar9);
                    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                    uVar1 = *(ushort *)(lVar4 + 0x132);
                  }
                  plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x30);
                  if ((uVar1 & 1) == 0) {
                    lVar4 = FUN_00d5941c(lVar4);
                  }
                  puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  if ((long *)**(long **)(lVar4 + 0xb8) != (long *)0x0) {
                    uVar12 = (**(code **)(*(long *)**(long **)(lVar4 + 0xb8) + 0x198))();
                    uVar7 = *(undefined8 *)puVar2;
                    *(undefined4 *)(unaff_x29 + -0x9c) = uVar12;
                    uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0x9c);
                    if (plVar11 != (long *)0x0) {
                      (**(code **)(*plVar11 + 0x338))
                                (plVar11,uVar5,uVar7,0,*(undefined8 *)(*plVar11 + 0x340));
                      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                      uVar1 = *(ushort *)(lVar9 + 0x132);
                      lVar4 = lVar9;
                      if ((uVar1 & 1) == 0) {
                        lVar9 = FUN_00d5941c(lVar9);
                        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                        uVar1 = *(ushort *)(lVar4 + 0x132);
                      }
                      plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x38);
                      if ((uVar1 & 1) == 0) {
                        lVar4 = FUN_00d5941c(lVar4);
                      }
                      if ((long *)**(long **)(lVar4 + 0xb8) != (long *)0x0) {
                        uVar12 = (**(code **)(*(long *)**(long **)(lVar4 + 0xb8) + 0x198))();
                        uVar7 = *(undefined8 *)puVar2;
                        *(undefined4 *)(unaff_x29 + -0xa0) = uVar12;
                        uVar7 = thunk_FUN_00d61fa0(uVar7,unaff_x29 + -0xa0);
                        if (plVar11 != (long *)0x0) {
                          (**(code **)(*plVar11 + 0x338))
                                    (plVar11,uVar5,uVar7,0,*(undefined8 *)(*plVar11 + 0x340));
                          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
                          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                            lVar4 = FUN_00d5941c(lVar4);
                          }
                          __src = (void *)FUN_00da5060(uVar5,lVar4,(long)__dest - uVar10);
                          memcpy(unaff_x20,__src,__n);
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



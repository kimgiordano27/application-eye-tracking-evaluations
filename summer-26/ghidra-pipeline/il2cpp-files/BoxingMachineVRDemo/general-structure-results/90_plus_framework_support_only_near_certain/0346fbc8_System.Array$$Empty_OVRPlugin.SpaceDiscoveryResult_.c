/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0346fbc8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  void *unaff_x20;
  void *pvVar5;
  long *plVar6;
  void *unaff_x22;
  void *pvVar7;
  size_t unaff_x24;
  size_t unaff_x25;
  long *plVar8;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  *(long *)(in_x9 + -0x100) = in_x12;
  lVar4 = (long)&stack0x00000000 - (in_x12 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x128) = lVar4;
  *(long *)(unaff_x29 + -0x138) = in_x11;
  lVar4 = lVar4 - (in_x11 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar4;
  *(long *)(unaff_x29 + -0x150) = in_x10;
  *(ulong *)(unaff_x29 + -0x158) = lVar4 - (in_x10 + 0xfU & 0x1fffffff0);
  lVar4 = FUN_05344f28(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar4 != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x38);
    plVar6 = *(long **)(lVar4 + 0x38);
    pvVar5 = *(void **)(unaff_x29 + -0x58);
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x20,pvVar5,unaff_x24);
    lVar1 = thunk_FUN_02d9d164(*plVar8);
    if (plVar6 != (long *)0x0) {
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
LAB_034702a4:
        uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar3,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar1;
        thunk_FUN_02dd37b4(plVar6 + 4,lVar1);
        lVar1 = *(long *)(unaff_x19 + 0x38);
        plVar6 = *(long **)(lVar4 + 0x38);
        pvVar5 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(*(long *)(lVar1 + 8) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x28,pvVar5,unaff_x25);
        lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 8));
        if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
        goto LAB_034702a4;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar1;
          thunk_FUN_02dd37b4(plVar6 + 5,lVar1);
          lVar1 = *(long *)(unaff_x19 + 0x38);
          plVar6 = *(long **)(lVar4 + 0x38);
          pvVar5 = *(void **)(unaff_x29 + -0x68);
          if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x27,pvVar5,*(size_t *)(unaff_x29 + -0x70));
          lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x10));
          if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
          goto LAB_034702a4;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar1;
            thunk_FUN_02dd37b4(plVar6 + 6,lVar1);
            lVar1 = *(long *)(unaff_x19 + 0x38);
            plVar6 = *(long **)(lVar4 + 0x38);
            pvVar5 = *(void **)(unaff_x29 + -0x78);
            if (-1 < *(int *)(*(long *)(lVar1 + 0x18) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(unaff_x22,pvVar5,*(size_t *)(unaff_x29 + -0x80));
            lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x18));
            if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
            goto LAB_034702a4;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = lVar1;
              thunk_FUN_02dd37b4(plVar6 + 7,lVar1);
              lVar1 = *(long *)(unaff_x19 + 0x38);
              pvVar7 = *(void **)(unaff_x29 + -0x98);
              plVar6 = *(long **)(lVar4 + 0x38);
              pvVar5 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar1 + 0x20) + 0x28)) {
                pvVar5 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x90));
              lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x20),pvVar7);
              if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
              goto LAB_034702a4;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = lVar1;
                thunk_FUN_02dd37b4(plVar6 + 8,lVar1);
                lVar1 = *(long *)(unaff_x19 + 0x38);
                pvVar7 = *(void **)(unaff_x29 + -0xb0);
                plVar6 = *(long **)(lVar4 + 0x38);
                pvVar5 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar1 + 0x28) + 0x28)) {
                  pvVar5 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0xa8));
                lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x28),pvVar7);
                if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                if ((lVar1 != 0) &&
                   (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
                goto LAB_034702a4;
                if (5 < *(uint *)(plVar6 + 3)) {
                  plVar6[9] = lVar1;
                  thunk_FUN_02dd37b4(plVar6 + 9,lVar1);
                  lVar1 = *(long *)(unaff_x19 + 0x38);
                  pvVar7 = *(void **)(unaff_x29 + -200);
                  plVar6 = *(long **)(lVar4 + 0x38);
                  pvVar5 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar1 + 0x30) + 0x28)) {
                    pvVar5 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0xc0));
                  lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x30),pvVar7);
                  if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                  if ((lVar1 != 0) &&
                     (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)
                     ) goto LAB_034702a4;
                  if (6 < *(uint *)(plVar6 + 3)) {
                    plVar6[10] = lVar1;
                    thunk_FUN_02dd37b4(plVar6 + 10,lVar1);
                    lVar1 = *(long *)(unaff_x19 + 0x38);
                    pvVar7 = *(void **)(unaff_x29 + -0xe0);
                    plVar6 = *(long **)(lVar4 + 0x38);
                    pvVar5 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar1 + 0x38) + 0x28)) {
                      pvVar5 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0xd8));
                    lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x38),pvVar7);
                    if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                    if ((lVar1 != 0) &&
                       (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar2 == 0)) goto LAB_034702a4;
                    if (7 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xb] = lVar1;
                      thunk_FUN_02dd37b4(plVar6 + 0xb,lVar1);
                      lVar1 = *(long *)(unaff_x19 + 0x38);
                      pvVar7 = *(void **)(unaff_x29 + -0xf8);
                      plVar6 = *(long **)(lVar4 + 0x38);
                      pvVar5 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar1 + 0x40) + 0x28)) {
                        pvVar5 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0xf0));
                      lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x40),pvVar7);
                      if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                      if ((lVar1 != 0) &&
                         (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar2 == 0)) goto LAB_034702a4;
                      if (8 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xc] = lVar1;
                        thunk_FUN_02dd37b4(plVar6 + 0xc,lVar1);
                        lVar1 = *(long *)(unaff_x19 + 0x38);
                        plVar6 = *(long **)(lVar4 + 0x38);
                        pvVar5 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar1 + 0x48) + 0x28)) {
                          pvVar5 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar7 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x108));
                        lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x48),pvVar7);
                        if (plVar6 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                        if ((lVar1 != 0) &&
                           (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar2 == 0)) goto LAB_034702a4;
                        if (9 < *(uint *)(plVar6 + 3)) {
                          plVar6[0xd] = lVar1;
                          thunk_FUN_02dd37b4(plVar6 + 0xd,lVar1);
                          lVar1 = *(long *)(unaff_x19 + 0x38);
                          plVar6 = *(long **)(lVar4 + 0x38);
                          pvVar5 = *(void **)(unaff_x29 + -0x118);
                          if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
                            pvVar5 = (void *)(unaff_x29 + 0x78);
                          }
                          pvVar7 = *(void **)(unaff_x29 + -0x128);
                          memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x120));
                          lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x50),pvVar7);
                          if (plVar6 == (long *)0x0)
                          goto System_Array__Empty<ShaderInput_LightData>;
                          if ((lVar1 != 0) &&
                             (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar2 == 0)) goto LAB_034702a4;
                          if (10 < *(uint *)(plVar6 + 3)) {
                            plVar6[0xe] = lVar1;
                            thunk_FUN_02dd37b4(plVar6 + 0xe,lVar1);
                            lVar1 = *(long *)(unaff_x19 + 0x38);
                            plVar6 = *(long **)(lVar4 + 0x38);
                            pvVar5 = *(void **)(unaff_x29 + -0x130);
                            if (-1 < *(int *)(*(long *)(lVar1 + 0x58) + 0x28)) {
                              pvVar5 = (void *)(unaff_x29 + 0x80);
                            }
                            pvVar7 = *(void **)(unaff_x29 + -0x140);
                            memcpy(pvVar7,pvVar5,*(size_t *)(unaff_x29 + -0x138));
                            lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x58),pvVar7);
                            if (plVar6 == (long *)0x0)
                            goto System_Array__Empty<ShaderInput_LightData>;
                            if ((lVar1 != 0) &&
                               (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar2 == 0)) goto LAB_034702a4;
                            if (0xb < *(uint *)(plVar6 + 3)) {
                              plVar6[0xf] = lVar1;
                              thunk_FUN_02dd37b4(plVar6 + 0xf,lVar1);
                              uVar3 = FUN_05332e6c(lVar4,0);
                              lVar1 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                              if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d60ae8();
                              }
                              FUN_05333790(lVar1,lVar4,0);
                              FUN_05332ee8(lVar4,uVar3,0);
                              pvVar5 = *(void **)(unaff_x29 + 0x88);
                              uVar3 = FUN_053285f8(lVar4,0);
                              lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
                              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                                lVar4 = FUN_02d9a2e0(lVar4);
                              }
                              pvVar7 = (void *)FUN_02d609d8(uVar3,lVar4,
                                                            *(undefined8 *)(unaff_x29 + -0x158));
                              memcpy(pvVar5,pvVar7,*(size_t *)(unaff_x29 + -0x150));
                              if (*(long *)(*(long *)(unaff_x29 + -0x148) + 0x28) ==
                                  *(long *)(unaff_x29 + -0x10)) {
                                return;
                              }
                    /* WARNING: Subroutine does not return */
                              __stack_chk_fail();
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
      FUN_02d60af0();
    }
  }
System_Array__Empty<ShaderInput_LightData>:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



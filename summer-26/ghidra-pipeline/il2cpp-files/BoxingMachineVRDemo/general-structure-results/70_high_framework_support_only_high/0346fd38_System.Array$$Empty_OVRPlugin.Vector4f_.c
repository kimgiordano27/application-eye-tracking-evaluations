/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4f>
ENTRY_POINT: 0346fd38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Vector4f>(void *param_1,undefined8 param_2,size_t param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar4;
  void *pvVar5;
  long unaff_x21;
  void *unaff_x22;
  void *pvVar6;
  long unaff_x23;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(unaff_x21 + 0x10) + 0x28)) {
    in_x9 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(param_1,in_x9,param_3);
  lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(unaff_x21 + 0x10));
  if (unaff_x20 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_034702a4:
      uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,0);
    }
    if (2 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[6] = lVar1;
      thunk_FUN_02dd37b4(unaff_x20 + 6,lVar1);
      lVar1 = *(long *)(unaff_x19 + 0x38);
      plVar4 = *(long **)(unaff_x23 + 0x38);
      pvVar5 = *(void **)(unaff_x29 + -0x78);
      if (-1 < *(int *)(*(long *)(lVar1 + 0x18) + 0x28)) {
        pvVar5 = (void *)(unaff_x29 + -0x30);
      }
      memcpy(unaff_x22,pvVar5,*(size_t *)(unaff_x29 + -0x80));
      lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x18));
      if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_034702a4;
      if (3 < *(uint *)(plVar4 + 3)) {
        plVar4[7] = lVar1;
        thunk_FUN_02dd37b4(plVar4 + 7,lVar1);
        lVar1 = *(long *)(unaff_x19 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        plVar4 = *(long **)(unaff_x23 + 0x38);
        pvVar5 = *(void **)(unaff_x29 + -0x88);
        if (-1 < *(int *)(*(long *)(lVar1 + 0x20) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x38);
        }
        memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x90));
        lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x20),pvVar6);
        if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_034702a4;
        if (4 < *(uint *)(plVar4 + 3)) {
          plVar4[8] = lVar1;
          thunk_FUN_02dd37b4(plVar4 + 8,lVar1);
          lVar1 = *(long *)(unaff_x19 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -0xb0);
          plVar4 = *(long **)(unaff_x23 + 0x38);
          pvVar5 = *(void **)(unaff_x29 + -0xa0);
          if (-1 < *(int *)(*(long *)(lVar1 + 0x28) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x40);
          }
          memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xa8));
          lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x28),pvVar6);
          if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
          goto LAB_034702a4;
          if (5 < *(uint *)(plVar4 + 3)) {
            plVar4[9] = lVar1;
            thunk_FUN_02dd37b4(plVar4 + 9,lVar1);
            lVar1 = *(long *)(unaff_x19 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -200);
            plVar4 = *(long **)(unaff_x23 + 0x38);
            pvVar5 = *(void **)(unaff_x29 + -0xb8);
            if (-1 < *(int *)(*(long *)(lVar1 + 0x30) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -0x48);
            }
            memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xc0));
            lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x30),pvVar6);
            if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_034702a4;
            if (6 < *(uint *)(plVar4 + 3)) {
              plVar4[10] = lVar1;
              thunk_FUN_02dd37b4(plVar4 + 10,lVar1);
              lVar1 = *(long *)(unaff_x19 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0xe0);
              plVar4 = *(long **)(unaff_x23 + 0x38);
              pvVar5 = *(void **)(unaff_x29 + -0xd0);
              if (-1 < *(int *)(*(long *)(lVar1 + 0x38) + 0x28)) {
                pvVar5 = (void *)(unaff_x29 + 0x60);
              }
              memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xd8));
              lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x38),pvVar6);
              if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
              goto LAB_034702a4;
              if (7 < *(uint *)(plVar4 + 3)) {
                plVar4[0xb] = lVar1;
                thunk_FUN_02dd37b4(plVar4 + 0xb,lVar1);
                lVar1 = *(long *)(unaff_x19 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -0xf8);
                plVar4 = *(long **)(unaff_x23 + 0x38);
                pvVar5 = *(void **)(unaff_x29 + -0xe8);
                if (-1 < *(int *)(*(long *)(lVar1 + 0x40) + 0x28)) {
                  pvVar5 = (void *)(unaff_x29 + 0x68);
                }
                memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xf0));
                lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x40),pvVar6);
                if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                if ((lVar1 != 0) &&
                   (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
                goto LAB_034702a4;
                if (8 < *(uint *)(plVar4 + 3)) {
                  plVar4[0xc] = lVar1;
                  thunk_FUN_02dd37b4(plVar4 + 0xc,lVar1);
                  lVar1 = *(long *)(unaff_x19 + 0x38);
                  plVar4 = *(long **)(unaff_x23 + 0x38);
                  pvVar5 = *(void **)(unaff_x29 + -0x100);
                  if (-1 < *(int *)(*(long *)(lVar1 + 0x48) + 0x28)) {
                    pvVar5 = (void *)(unaff_x29 + 0x70);
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0x110);
                  memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x108));
                  lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x48),pvVar6);
                  if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                  if ((lVar1 != 0) &&
                     (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)
                     ) goto LAB_034702a4;
                  if (9 < *(uint *)(plVar4 + 3)) {
                    plVar4[0xd] = lVar1;
                    thunk_FUN_02dd37b4(plVar4 + 0xd,lVar1);
                    lVar1 = *(long *)(unaff_x19 + 0x38);
                    plVar4 = *(long **)(unaff_x23 + 0x38);
                    pvVar5 = *(void **)(unaff_x29 + -0x118);
                    if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
                      pvVar5 = (void *)(unaff_x29 + 0x78);
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0x128);
                    memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x120));
                    lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x50),pvVar6);
                    if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                    if ((lVar1 != 0) &&
                       (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar2 == 0)) goto LAB_034702a4;
                    if (10 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xe] = lVar1;
                      thunk_FUN_02dd37b4(plVar4 + 0xe,lVar1);
                      lVar1 = *(long *)(unaff_x19 + 0x38);
                      plVar4 = *(long **)(unaff_x23 + 0x38);
                      pvVar5 = *(void **)(unaff_x29 + -0x130);
                      if (-1 < *(int *)(*(long *)(lVar1 + 0x58) + 0x28)) {
                        pvVar5 = (void *)(unaff_x29 + 0x80);
                      }
                      pvVar6 = *(void **)(unaff_x29 + -0x140);
                      memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x138));
                      lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(lVar1 + 0x58),pvVar6);
                      if (plVar4 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                      if ((lVar1 != 0) &&
                         (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar2 == 0)) goto LAB_034702a4;
                      if (0xb < *(uint *)(plVar4 + 3)) {
                        plVar4[0xf] = lVar1;
                        thunk_FUN_02dd37b4(plVar4 + 0xf,lVar1);
                        FUN_05332e6c();
                        lVar1 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d60ae8();
                        }
                        FUN_05333790(lVar1);
                        FUN_05332ee8();
                        pvVar5 = *(void **)(unaff_x29 + 0x88);
                        uVar3 = FUN_053285f8();
                        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
                        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                          lVar1 = FUN_02d9a2e0(lVar1);
                        }
                        pvVar6 = (void *)FUN_02d609d8(uVar3,lVar1,
                                                      *(undefined8 *)(unaff_x29 + -0x158));
                        memcpy(pvVar5,pvVar6,*(size_t *)(unaff_x29 + -0x150));
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
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
System_Array__Empty<ShaderInput_LightData>:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



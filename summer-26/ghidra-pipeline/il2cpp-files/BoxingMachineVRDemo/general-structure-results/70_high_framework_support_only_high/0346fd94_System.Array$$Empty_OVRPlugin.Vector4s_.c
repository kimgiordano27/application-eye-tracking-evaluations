/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4s>
ENTRY_POINT: 0346fd94
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


void System_Array__Empty<OVRPlugin_Vector4s>(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  void *unaff_x22;
  void *pvVar6;
  long unaff_x23;
  long unaff_x29;
  
  thunk_FUN_02dd37b4();
  lVar5 = *(long *)(unaff_x19 + 0x38);
  plVar3 = *(long **)(unaff_x23 + 0x38);
  pvVar4 = *(void **)(unaff_x29 + -0x78);
  if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
    pvVar4 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(unaff_x22,pvVar4,*(size_t *)(unaff_x29 + -0x80));
  lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x18));
  if (plVar3 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0)) {
LAB_034702a4:
      uVar2 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar2,0);
    }
    if (3 < *(uint *)(plVar3 + 3)) {
      plVar3[7] = lVar5;
      thunk_FUN_02dd37b4(plVar3 + 7,lVar5);
      lVar5 = *(long *)(unaff_x19 + 0x38);
      pvVar6 = *(void **)(unaff_x29 + -0x98);
      plVar3 = *(long **)(unaff_x23 + 0x38);
      pvVar4 = *(void **)(unaff_x29 + -0x88);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
        pvVar4 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x90));
      lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x20),pvVar6);
      if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
      if ((lVar5 != 0) &&
         (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_034702a4;
      if (4 < *(uint *)(plVar3 + 3)) {
        plVar3[8] = lVar5;
        thunk_FUN_02dd37b4(plVar3 + 8,lVar5);
        lVar5 = *(long *)(unaff_x19 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0xb0);
        plVar3 = *(long **)(unaff_x23 + 0x38);
        pvVar4 = *(void **)(unaff_x29 + -0xa0);
        if (-1 < *(int *)(*(long *)(lVar5 + 0x28) + 0x28)) {
          pvVar4 = (void *)(unaff_x29 + -0x40);
        }
        memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xa8));
        lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x28),pvVar6);
        if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
        if ((lVar5 != 0) &&
           (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
        goto LAB_034702a4;
        if (5 < *(uint *)(plVar3 + 3)) {
          plVar3[9] = lVar5;
          thunk_FUN_02dd37b4(plVar3 + 9,lVar5);
          lVar5 = *(long *)(unaff_x19 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -200);
          plVar3 = *(long **)(unaff_x23 + 0x38);
          pvVar4 = *(void **)(unaff_x29 + -0xb8);
          if (-1 < *(int *)(*(long *)(lVar5 + 0x30) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -0x48);
          }
          memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xc0));
          lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x30),pvVar6);
          if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
          if ((lVar5 != 0) &&
             (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
          goto LAB_034702a4;
          if (6 < *(uint *)(plVar3 + 3)) {
            plVar3[10] = lVar5;
            thunk_FUN_02dd37b4(plVar3 + 10,lVar5);
            lVar5 = *(long *)(unaff_x19 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -0xe0);
            plVar3 = *(long **)(unaff_x23 + 0x38);
            pvVar4 = *(void **)(unaff_x29 + -0xd0);
            if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + 0x60);
            }
            memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xd8));
            lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x38),pvVar6);
            if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
            if ((lVar5 != 0) &&
               (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
            goto LAB_034702a4;
            if (7 < *(uint *)(plVar3 + 3)) {
              plVar3[0xb] = lVar5;
              thunk_FUN_02dd37b4(plVar3 + 0xb,lVar5);
              lVar5 = *(long *)(unaff_x19 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0xf8);
              plVar3 = *(long **)(unaff_x23 + 0x38);
              pvVar4 = *(void **)(unaff_x29 + -0xe8);
              if (-1 < *(int *)(*(long *)(lVar5 + 0x40) + 0x28)) {
                pvVar4 = (void *)(unaff_x29 + 0x68);
              }
              memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xf0));
              lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x40),pvVar6);
              if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
              if ((lVar5 != 0) &&
                 (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
              goto LAB_034702a4;
              if (8 < *(uint *)(plVar3 + 3)) {
                plVar3[0xc] = lVar5;
                thunk_FUN_02dd37b4(plVar3 + 0xc,lVar5);
                lVar5 = *(long *)(unaff_x19 + 0x38);
                plVar3 = *(long **)(unaff_x23 + 0x38);
                pvVar4 = *(void **)(unaff_x29 + -0x100);
                if (-1 < *(int *)(*(long *)(lVar5 + 0x48) + 0x28)) {
                  pvVar4 = (void *)(unaff_x29 + 0x70);
                }
                pvVar6 = *(void **)(unaff_x29 + -0x110);
                memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x108));
                lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x48),pvVar6);
                if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                if ((lVar5 != 0) &&
                   (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
                goto LAB_034702a4;
                if (9 < *(uint *)(plVar3 + 3)) {
                  plVar3[0xd] = lVar5;
                  thunk_FUN_02dd37b4(plVar3 + 0xd,lVar5);
                  lVar5 = *(long *)(unaff_x19 + 0x38);
                  plVar3 = *(long **)(unaff_x23 + 0x38);
                  pvVar4 = *(void **)(unaff_x29 + -0x118);
                  if (-1 < *(int *)(*(long *)(lVar5 + 0x50) + 0x28)) {
                    pvVar4 = (void *)(unaff_x29 + 0x78);
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0x128);
                  memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x120));
                  lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x50),pvVar6);
                  if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                  if ((lVar5 != 0) &&
                     (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0)
                     ) goto LAB_034702a4;
                  if (10 < *(uint *)(plVar3 + 3)) {
                    plVar3[0xe] = lVar5;
                    thunk_FUN_02dd37b4(plVar3 + 0xe,lVar5);
                    lVar5 = *(long *)(unaff_x19 + 0x38);
                    plVar3 = *(long **)(unaff_x23 + 0x38);
                    pvVar4 = *(void **)(unaff_x29 + -0x130);
                    if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
                      pvVar4 = (void *)(unaff_x29 + 0x80);
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0x140);
                    memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x138));
                    lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x58),pvVar6);
                    if (plVar3 == (long *)0x0) goto System_Array__Empty<ShaderInput_LightData>;
                    if ((lVar5 != 0) &&
                       (lVar1 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar1 == 0)) goto LAB_034702a4;
                    if (0xb < *(uint *)(plVar3 + 3)) {
                      plVar3[0xf] = lVar5;
                      thunk_FUN_02dd37b4(plVar3 + 0xf,lVar5);
                      FUN_05332e6c();
                      lVar5 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      FUN_05333790(lVar5);
                      FUN_05332ee8();
                      pvVar4 = *(void **)(unaff_x29 + 0x88);
                      uVar2 = FUN_053285f8();
                      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
                      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                        lVar5 = FUN_02d9a2e0(lVar5);
                      }
                      pvVar6 = (void *)FUN_02d609d8(uVar2,lVar5,*(undefined8 *)(unaff_x29 + -0x158))
                      ;
                      memcpy(pvVar4,pvVar6,*(size_t *)(unaff_x29 + -0x150));
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
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
System_Array__Empty<ShaderInput_LightData>:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



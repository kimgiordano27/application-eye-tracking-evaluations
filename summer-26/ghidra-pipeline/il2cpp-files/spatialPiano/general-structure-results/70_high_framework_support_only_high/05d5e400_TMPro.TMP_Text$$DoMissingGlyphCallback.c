/*
FUNCTION_NAME: TMPro.TMP_Text$$DoMissingGlyphCallback
ENTRY_POINT: 05d5e400
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void TMPro_TMP_Text__DoMissingGlyphCallback(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 uVar13;
  long lVar14;
  long unaff_x23;
  uint unaff_w24;
  ulong uVar15;
  uint unaff_w28;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  
  lVar12 = in_stack_000000f0;
  uVar15 = 0;
  lVar14 = 0x20;
  do {
    lVar10 = *(long *)(unaff_x19 + 0x40);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    memmove((void *)(lVar12 + lVar14 + -0x20),(void *)(lVar10 + lVar14),0x78);
    uVar15 = uVar15 + 1;
    lVar14 = lVar14 + 0x78;
  } while (unaff_w24 != uVar15);
  if (((unaff_w20 | unaff_w28 ^ 1) & 1) == 0) {
    memmove((void *)(in_stack_000000f0 + (long)(int)unaff_w24 * 0x78),(void *)(unaff_x19 + 0x48),
            0x78);
  }
  auVar16 = FUN_05d5bee0();
  puVar3 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  if (unaff_x23 == 0) {
    iStack0000000000000014 = 0;
  }
  else {
    iVar11 = (int)*(ulong *)(unaff_x23 + 0x18);
    iStack0000000000000014 = iVar11 + -1;
    if (0 < iVar11) {
      uVar15 = 0;
      do {
        if (*(int *)(unaff_x23 + 0x20 + uVar15 * 4) == -1) {
          iStack0000000000000014 = (int)uVar15;
          break;
        }
        uVar15 = uVar15 + 1;
      } while ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) != uVar15);
    }
  }
  uVar5 = FUN_05d5ec1c();
  uVar1 = uVar5;
  if (unaff_w28 == 0) {
    uVar1 = 0;
  }
  FUN_03d1851c(&stack0x000000e0,uVar1,2,1,*(undefined8 *)PTR_DAT_067cc4f8);
  if ((unaff_w28 != 0) && (uVar5 != 0)) {
    lVar12 = unaff_x21[0xb];
    lVar14 = 0;
    iVar11 = 1;
    do {
      *(undefined4 *)(in_stack_000000e0 + lVar14 * 4) = *(undefined4 *)(lVar12 + lVar14 * 4);
      lVar14 = (long)iVar11;
      iVar11 = iVar11 + 1;
    } while (lVar14 < (long)(ulong)uVar5);
  }
  puVar4 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  iVar11 = (int)in_stack_00000018;
  if (iStack0000000000000014 == 1) {
LAB_05d5e574:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar15 = FUN_05d5cfdc();
    if ((uVar15 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a6338(*(undefined8 *)
                    Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__,0);
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_050d645c(auVar16._8_8_ & 0xffffffff,1,0);
    uVar13 = in_stack_000000f8;
    lVar14 = in_stack_000000f0;
    if (unaff_w28 == 0) {
      unaff_w24 = 0;
    }
    if (unaff_w20 != 0) {
      unaff_w24 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_061295c8(&stack0x00000108,auVar16._0_8_ & 0xffffffff,auVar16._0_8_ >> 0x20,uVar6,lVar14,
                 uVar13,unaff_w24,0);
    FUN_03ce5340(&stack0x000000f0,
                 *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_061297e8(&stack0x00000108,in_stack_000000e0,in_stack_000000e8,0,0);
LAB_05d5e664:
    *(int *)(unaff_x19 + 0x10) = iVar11;
  }
  else {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(unaff_x23 + 0x20) == iVar11) goto LAB_05d5e574;
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10),
                          *(undefined8 *)
                           Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar9 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar15 = FUN_05d5ed90(uVar13,uVar9);
    if ((uVar15 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_05d5cfdc(uVar13);
      uVar13 = in_stack_000000e8;
      lVar14 = in_stack_000000e0;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_061297e8(&stack0x00000108,lVar14,uVar13,0,0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar9 = *(undefined8 *)(lVar12 + 0x68);
        uVar2 = *(undefined8 *)(lVar12 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbf10);
        }
        FUN_061296dc(&stack0x00000108,lVar14,uVar13,uVar9,uVar2,0,0);
      }
      goto LAB_05d5e664;
    }
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar15 = FUN_05d5cfdc(uVar13);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      uVar13 = in_stack_000000e8;
      lVar14 = in_stack_000000e0;
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_061296dc(&stack0x00000108,lVar14,uVar13,*(undefined8 *)(lVar12 + 0x68),
                   *(undefined8 *)(lVar12 + 0x70),0,0);
      goto LAB_05d5e664;
    }
  }
  FUN_03d18804(&stack0x000000e0,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*unaff_x21 + 0x1d8))();
  puVar7 = (undefined8 *)FUN_05ddf250(in_stack_00000008,0);
  uVar13 = *puVar7;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000108,uVar13,0);
  plVar8 = (long *)FUN_05ddf250(in_stack_00000008,0);
  if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar8,0);
  uVar1 = iStack0000000000000014 - 1;
  if (uVar1 != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(unaff_x23 + (long)(int)uVar1 * 4 + 0x20) != iVar11) goto LAB_05d5e754;
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_061298c8(&stack0x00000108,0);
  FUN_06129940(&stack0x00000108,0);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
LAB_05d5e754:
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar14 = *(long *)(unaff_x19 + 0x40);
  if (lVar14 != 0) {
    uVar15 = 0;
    lVar12 = 0x20;
    do {
      if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar15) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar3;
        }
        memmove((void *)(unaff_x19 + 0x48),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
        FUN_05c5cb50(&stack0x00000104,0);
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc3978 == '\0') {
        FUN_02f08768(puVar3);
        DAT_06bc3978 = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar3;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar14 + lVar12),(void *)(*(long *)(lVar10 + 0xb8) + 8),0x78);
      lVar10 = *(long *)(unaff_x19 + 0xc0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar14 = *(long *)(unaff_x19 + 0x40);
      lVar10 = lVar10 + uVar15;
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0x78;
      *(undefined1 *)(lVar10 + 0x20) = 0;
    } while (lVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



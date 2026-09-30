/*
FUNCTION_NAME: TMPro.TMP_Text$$PackUV
ENTRY_POINT: 05d5e4b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void TMPro_TMP_Text__PackUV(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char in_NG;
  char in_OV;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong in_x9;
  long lVar12;
  int iVar13;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar14;
  long unaff_x23;
  undefined4 unaff_w24;
  ulong unaff_x25;
  undefined4 unaff_w26;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  
  if (in_NG == in_OV) {
    uVar10 = 0;
    do {
      if (*(int *)(unaff_x23 + 0x20 + uVar10 * 4) == -1) {
        in_stack_00000010._4_4_ = (int)uVar10;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((in_x9 & 0xffffffff) != uVar10);
  }
  uVar4 = FUN_05d5ec1c();
  uVar1 = uVar4;
  if (unaff_w28 == 0) {
    uVar1 = 0;
  }
  FUN_03d1851c(&stack0x000000e0,uVar1,2,1,*(undefined8 *)PTR_DAT_067cc4f8);
  if ((unaff_w28 != 0) && (uVar4 != 0)) {
    lVar12 = unaff_x21[0xb];
    lVar11 = 0;
    iVar13 = 1;
    do {
      *(undefined4 *)(in_stack_000000e0 + lVar11 * 4) = *(undefined4 *)(lVar12 + lVar11 * 4);
      lVar11 = (long)iVar13;
      iVar13 = iVar13 + 1;
    } while (lVar11 < (long)(ulong)uVar4);
  }
  puVar3 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  iVar13 = (int)in_stack_00000018;
  if (in_stack_00000010._4_4_ == 1) {
LAB_05d5e574:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05d5cfdc();
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a6338(*(undefined8 *)
                    Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__,0);
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_050d645c(unaff_w26,1,0);
    uVar9 = in_stack_000000f8;
    uVar14 = in_stack_000000f0;
    if (unaff_w28 == 0) {
      unaff_w24 = 0;
    }
    if (unaff_w20 != 0) {
      unaff_w24 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_061295c8(&stack0x00000108,unaff_x25 & 0xffffffff,unaff_x25 >> 0x20,uVar5,uVar14,uVar9,
                 unaff_w24,0);
    FUN_03ce5340(&stack0x000000f0,
                 *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_061297e8(&stack0x00000108,in_stack_000000e0,in_stack_000000e8,0,0);
LAB_05d5e664:
    *(int *)(unaff_x19 + 0x10) = iVar13;
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
    if (*(int *)(unaff_x23 + 0x20) == iVar13) goto LAB_05d5e574;
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar14 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10),
                          *(undefined8 *)
                           Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar9 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05d5ed90(uVar14,uVar9);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar14 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05d5cfdc(uVar14);
      uVar14 = in_stack_000000e8;
      lVar11 = in_stack_000000e0;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_061297e8(&stack0x00000108,lVar11,uVar14,0,0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar9 = *(undefined8 *)(lVar12 + 0x68);
        uVar2 = *(undefined8 *)(lVar12 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbf10);
        }
        FUN_061296dc(&stack0x00000108,lVar11,uVar14,uVar9,uVar2,0,0);
      }
      goto LAB_05d5e664;
    }
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar14 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05d5cfdc(uVar14);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      uVar14 = in_stack_000000e8;
      lVar11 = in_stack_000000e0;
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_061296dc(&stack0x00000108,lVar11,uVar14,*(undefined8 *)(lVar12 + 0x68),
                   *(undefined8 *)(lVar12 + 0x70),0,0);
      goto LAB_05d5e664;
    }
  }
  FUN_03d18804(&stack0x000000e0,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*unaff_x21 + 0x1d8))();
  puVar6 = (undefined8 *)FUN_05ddf250();
  uVar14 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000108,uVar14,0);
  plVar7 = (long *)FUN_05ddf250();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar7,0);
  uVar1 = in_stack_00000010._4_4_ - 1;
  if (uVar1 != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(unaff_x23 + (long)(int)uVar1 * 4 + 0x20) != iVar13) goto LAB_05d5e754;
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
  lVar11 = *(long *)(unaff_x19 + 0x40);
  if (lVar11 != 0) {
    uVar10 = 0;
    lVar12 = 0x20;
    do {
      if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar10) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar11 = *(long *)puVar3;
        }
        memmove((void *)(unaff_x19 + 0x48),(void *)(*(long *)(lVar11 + 0xb8) + 8),0x78);
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
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar3;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar11 + lVar12),(void *)(*(long *)(lVar8 + 0xb8) + 8),0x78);
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar11 = *(long *)(unaff_x19 + 0x40);
      lVar8 = lVar8 + uVar10;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x78;
      *(undefined1 *)(lVar8 + 0x20) = 0;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



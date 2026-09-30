/*
FUNCTION_NAME: TMPro.TMP_Text$$PackUV
ENTRY_POINT: 05d5e508
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void TMPro_TMP_Text__PackUV(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar13;
  long unaff_x23;
  undefined4 unaff_w24;
  ulong unaff_x25;
  undefined4 unaff_w26;
  uint unaff_w27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  
  FUN_03d1851c(&stack0x000000e0,param_2,2,1);
  if ((unaff_w28 != 0) && (unaff_w27 != 0)) {
    lVar11 = unaff_x21[0xb];
    lVar10 = 0;
    iVar12 = 1;
    do {
      *(undefined4 *)(in_stack_000000e0 + lVar10 * 4) = *(undefined4 *)(lVar11 + lVar10 * 4);
      lVar10 = (long)iVar12;
      iVar12 = iVar12 + 1;
    } while (lVar10 < (long)(ulong)unaff_w27);
  }
  puVar3 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  iVar12 = (int)in_stack_00000018;
  if (in_stack_00000010._4_4_ == 1) {
LAB_05d5e574:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_05d5cfdc();
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a6338(*(undefined8 *)
                    Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__,0);
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_050d645c(unaff_w26,1,0);
    uVar9 = in_stack_000000f8;
    uVar13 = in_stack_000000f0;
    if (unaff_w28 == 0) {
      unaff_w24 = 0;
    }
    if (unaff_w20 != 0) {
      unaff_w24 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_061295c8(&stack0x00000108,unaff_x25 & 0xffffffff,unaff_x25 >> 0x20,uVar4,uVar13,uVar9,
                 unaff_w24,0);
    FUN_03ce5340(&stack0x000000f0,
                 *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_061297e8(&stack0x00000108,in_stack_000000e0,in_stack_000000e8,0,0);
LAB_05d5e664:
    *(int *)(unaff_x19 + 0x10) = iVar12;
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
    if (*(int *)(unaff_x23 + 0x20) == iVar12) goto LAB_05d5e574;
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
    uVar9 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_05d5ed90(uVar13,uVar9);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_05d5cfdc(uVar13);
      uVar13 = in_stack_000000e8;
      lVar10 = in_stack_000000e0;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_061297e8(&stack0x00000108,lVar10,uVar13,0,0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar9 = *(undefined8 *)(lVar11 + 0x68);
        uVar1 = *(undefined8 *)(lVar11 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbf10);
        }
        FUN_061296dc(&stack0x00000108,lVar10,uVar13,uVar9,uVar1,0,0);
      }
      goto LAB_05d5e664;
    }
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_05d5cfdc(uVar13);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      uVar13 = in_stack_000000e8;
      lVar10 = in_stack_000000e0;
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar11 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar3);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_061296dc(&stack0x00000108,lVar10,uVar13,*(undefined8 *)(lVar11 + 0x68),
                   *(undefined8 *)(lVar11 + 0x70),0,0);
      goto LAB_05d5e664;
    }
  }
  FUN_03d18804(&stack0x000000e0,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*unaff_x21 + 0x1d8))();
  puVar6 = (undefined8 *)FUN_05ddf250();
  uVar13 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000108,uVar13,0);
  plVar7 = (long *)FUN_05ddf250();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar7,0);
  uVar2 = in_stack_00000010._4_4_ - 1;
  if (uVar2 != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(unaff_x23 + (long)(int)uVar2 * 4 + 0x20) != iVar12) goto LAB_05d5e754;
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
  lVar10 = *(long *)(unaff_x19 + 0x40);
  if (lVar10 != 0) {
    uVar5 = 0;
    lVar11 = 0x20;
    do {
      if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar5) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar10 = *(long *)puVar3;
        }
        memmove((void *)(unaff_x19 + 0x48),(void *)(*(long *)(lVar10 + 0xb8) + 8),0x78);
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
      if (*(uint *)(lVar10 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar10 + lVar11),(void *)(*(long *)(lVar8 + 0xb8) + 8),0x78);
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar10 = *(long *)(unaff_x19 + 0x40);
      lVar8 = lVar8 + uVar5;
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 0x78;
      *(undefined1 *)(lVar8 + 0x20) = 0;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



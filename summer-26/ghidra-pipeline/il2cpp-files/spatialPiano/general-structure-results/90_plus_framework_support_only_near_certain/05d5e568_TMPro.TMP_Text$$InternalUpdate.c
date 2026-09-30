/*
FUNCTION_NAME: TMPro.TMP_Text$$InternalUpdate
ENTRY_POINT: 05d5e568
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void TMPro_TMP_Text__InternalUpdate(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int in_w8;
  int iVar11;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar12;
  long unaff_x23;
  long lVar13;
  undefined4 unaff_w24;
  ulong unaff_x25;
  long lVar14;
  undefined4 unaff_w26;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  
  puVar4 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  iVar11 = (int)in_stack_00000018;
  if (in_w8 == iVar11) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05d5cfdc();
    if ((uVar6 & 1) != 0) {
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
    uVar10 = in_stack_000000f8;
    uVar12 = in_stack_000000f0;
    if (unaff_w28 == 0) {
      unaff_w24 = 0;
    }
    if (unaff_w20 != 0) {
      unaff_w24 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_061295c8(&stack0x00000108,unaff_x25 & 0xffffffff,unaff_x25 >> 0x20,uVar5,uVar12,uVar10,
                 unaff_w24,0);
    FUN_03ce5340(&stack0x000000f0,
                 *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_061297e8(&stack0x00000108,in_stack_000000e0,in_stack_000000e8,0,0);
LAB_05d5e664:
    *(int *)(unaff_x19 + 0x10) = iVar11;
  }
  else {
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10),
                          *(undefined8 *)
                           Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05d5ed90(uVar12,uVar10);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_05d5cfdc(uVar12);
      uVar10 = in_stack_000000e8;
      uVar12 = in_stack_000000e0;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_061297e8(&stack0x00000108,uVar12,uVar10,0,0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar1 = *(undefined8 *)(lVar14 + 0x68);
        uVar2 = *(undefined8 *)(lVar14 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbf10);
        }
        FUN_061296dc(&stack0x00000108,uVar12,uVar10,uVar1,uVar2,0,0);
      }
      goto LAB_05d5e664;
    }
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar12 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05d5cfdc(uVar12);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      uVar10 = in_stack_000000e8;
      uVar12 = in_stack_000000e0;
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar14 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar4);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_061296dc(&stack0x00000108,uVar12,uVar10,*(undefined8 *)(lVar14 + 0x68),
                   *(undefined8 *)(lVar14 + 0x70),0,0);
      goto LAB_05d5e664;
    }
  }
  FUN_03d18804(&stack0x000000e0,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*unaff_x21 + 0x1d8))();
  puVar7 = (undefined8 *)FUN_05ddf250();
  uVar12 = *puVar7;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000108,uVar12,0);
  plVar8 = (long *)FUN_05ddf250();
  if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar8,0);
  uVar3 = in_stack_00000010._4_4_ - 1;
  if (uVar3 != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(unaff_x23 + (long)(int)uVar3 * 4 + 0x20) != iVar11) goto LAB_05d5e754;
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_061298c8(&stack0x00000108,0);
  FUN_06129940(&stack0x00000108,0);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
LAB_05d5e754:
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar14 = *(long *)(unaff_x19 + 0x40);
  if (lVar14 != 0) {
    uVar6 = 0;
    lVar13 = 0x20;
    do {
      if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar6) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar4;
        }
        memmove((void *)(unaff_x19 + 0x48),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
        FUN_05c5cb50(&stack0x00000104,0);
        return;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc3978 == '\0') {
        FUN_02f08768(puVar4);
        DAT_06bc3978 = '\x01';
      }
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *(long *)puVar4;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar14 + lVar13),(void *)(*(long *)(lVar9 + 0xb8) + 8),0x78);
      lVar9 = *(long *)(unaff_x19 + 0xc0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar14 = *(long *)(unaff_x19 + 0x40);
      lVar9 = lVar9 + uVar6;
      uVar6 = uVar6 + 1;
      lVar13 = lVar13 + 0x78;
      *(undefined1 *)(lVar9 + 0x20) = 0;
    } while (lVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



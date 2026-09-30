/*
FUNCTION_NAME: TMPro.TMP_Text$$ClearMesh
ENTRY_POINT: 05d5e308
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void TMPro_TMP_Text__ClearMesh(void)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar16;
  long lVar17;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000008;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  
  uVar10 = FUN_060f078c();
  if ((uVar10 & 1) == 0) {
LAB_05d5e330:
    if ((char)unaff_x21[10] != '\0') {
      lVar14 = unaff_x21[0x13];
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_000000a8 = *(undefined8 *)(lVar14 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar14 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar14 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar14 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar14 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0610d14c(&stack0x00000078,2,0);
      in_stack_00000028 = in_stack_00000080;
      in_stack_00000020 = in_stack_00000078;
      in_stack_00000038 = in_stack_00000090;
      in_stack_00000030 = in_stack_00000088;
      in_stack_00000040 = in_stack_00000098;
      in_stack_00000058 = in_stack_000000a8;
      in_stack_00000050 = in_stack_000000a0;
      in_stack_00000068 = in_stack_000000b8;
      in_stack_00000060 = in_stack_000000b0;
      in_stack_00000070 = in_stack_000000c0;
      uVar10 = FUN_0610d678(&stack0x00000050,&stack0x00000020,0);
      if ((uVar10 & 1) == 0) {
        bVar3 = true;
        bVar4 = true;
        goto LAB_05d5e3d8;
      }
    }
    bVar3 = false;
    iVar7 = unaff_w24 + 1;
    bVar4 = true;
  }
  else {
    if (*(long *)(unaff_x25 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar7 = FUN_060d3708(*(long *)(unaff_x25 + 0xf0),0);
    if (iVar7 != 0) goto LAB_05d5e330;
    bVar3 = false;
    bVar4 = false;
LAB_05d5e3d8:
    iVar7 = 1;
  }
  FUN_03ce5014(&stack0x000000f0,iVar7,2,1,
               *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__);
  lVar14 = in_stack_000000f0;
  if (0 < (int)unaff_w24) {
    uVar10 = 0;
    lVar17 = 0x20;
    do {
      lVar15 = *(long *)(unaff_x19 + 0x40);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar14 + lVar17 + -0x20),(void *)(lVar15 + lVar17),0x78);
      uVar10 = uVar10 + 1;
      lVar17 = lVar17 + 0x78;
    } while (unaff_w24 != uVar10);
  }
  if (!bVar3 && !(bool)(bVar4 ^ 1)) {
    memmove((void *)(in_stack_000000f0 + (long)(int)unaff_w24 * 0x78),(void *)(unaff_x19 + 0x48),
            0x78);
  }
  auVar18 = FUN_05d5bee0();
  puVar5 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  if (unaff_x23 == 0) {
    iStack0000000000000014 = 0;
  }
  else {
    iVar7 = (int)*(ulong *)(unaff_x23 + 0x18);
    iStack0000000000000014 = iVar7 + -1;
    if (0 < iVar7) {
      uVar10 = 0;
      do {
        if (*(int *)(unaff_x23 + 0x20 + uVar10 * 4) == -1) {
          iStack0000000000000014 = (int)uVar10;
          break;
        }
        uVar10 = uVar10 + 1;
      } while ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) != uVar10);
    }
  }
  uVar8 = FUN_05d5ec1c();
  uVar1 = uVar8;
  if (!bVar4) {
    uVar1 = 0;
  }
  FUN_03d1851c(&stack0x000000e0,uVar1,2,1,*(undefined8 *)PTR_DAT_067cc4f8);
  if ((bVar4) && (uVar8 != 0)) {
    lVar17 = unaff_x21[0xb];
    lVar14 = 0;
    iVar7 = 1;
    do {
      *(undefined4 *)(in_stack_000000e0 + lVar14 * 4) = *(undefined4 *)(lVar17 + lVar14 * 4);
      lVar14 = (long)iVar7;
      iVar7 = iVar7 + 1;
    } while (lVar14 < (long)(ulong)uVar8);
  }
  puVar6 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  iVar7 = (int)in_stack_00000018;
  if (iStack0000000000000014 == 1) {
LAB_05d5e574:
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
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
    uVar9 = FUN_050d645c(auVar18._8_8_ & 0xffffffff,1,0);
    uVar16 = in_stack_000000f8;
    lVar14 = in_stack_000000f0;
    if (!bVar4) {
      unaff_w24 = 0;
    }
    if (bVar3) {
      unaff_w24 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_061295c8(&stack0x00000108,auVar18._0_8_ & 0xffffffff,auVar18._0_8_ >> 0x20,uVar9,lVar14,
                 uVar16,unaff_w24,0);
    FUN_03ce5340(&stack0x000000f0,
                 *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_061297e8(&stack0x00000108,in_stack_000000e0,in_stack_000000e8,0,0);
LAB_05d5e664:
    *(int *)(unaff_x19 + 0x10) = iVar7;
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
    if (*(int *)(unaff_x23 + 0x20) == iVar7) goto LAB_05d5e574;
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar16 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10),
                          *(undefined8 *)
                           Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar6);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05d5ed90(uVar16,uVar13);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05d5cfdc(uVar16);
      uVar16 = in_stack_000000e8;
      lVar14 = in_stack_000000e0;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_061297e8(&stack0x00000108,lVar14,uVar16,0,0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar6);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar13 = *(undefined8 *)(lVar17 + 0x68);
        uVar2 = *(undefined8 *)(lVar17 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbf10);
        }
        FUN_061296dc(&stack0x00000108,lVar14,uVar16,uVar13,uVar2,0,0);
      }
      goto LAB_05d5e664;
    }
    if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar16 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar6);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05d5cfdc(uVar16);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&stack0x00000108,0);
      uVar16 = in_stack_000000e8;
      lVar14 = in_stack_000000e0;
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = FUN_03abf644(*(long *)(unaff_x19 + 0x108),in_stack_00000018,*(undefined8 *)puVar6);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_061296dc(&stack0x00000108,lVar14,uVar16,*(undefined8 *)(lVar17 + 0x68),
                   *(undefined8 *)(lVar17 + 0x70),0,0);
      goto LAB_05d5e664;
    }
  }
  FUN_03d18804(&stack0x000000e0,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*unaff_x21 + 0x1d8))();
  puVar11 = (undefined8 *)FUN_05ddf250(in_stack_00000008,0);
  uVar16 = *puVar11;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000108,uVar16,0);
  plVar12 = (long *)FUN_05ddf250(in_stack_00000008,0);
  if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar12,0);
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
    if (*(int *)(unaff_x23 + (long)(int)uVar1 * 4 + 0x20) != iVar7) goto LAB_05d5e754;
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_061298c8(&stack0x00000108,0);
  FUN_06129940(&stack0x00000108,0);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
LAB_05d5e754:
  puVar5 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar14 = *(long *)(unaff_x19 + 0x40);
  if (lVar14 != 0) {
    uVar10 = 0;
    lVar17 = 0x20;
    do {
      if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar10) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar5;
        }
        memmove((void *)(unaff_x19 + 0x48),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
        FUN_05c5cb50(&stack0x00000104,0);
        return;
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc3978 == '\0') {
        FUN_02f08768(puVar5);
        DAT_06bc3978 = '\x01';
      }
      lVar15 = *(long *)puVar5;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar15 = *(long *)puVar5;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar14 + lVar17),(void *)(*(long *)(lVar15 + 0xb8) + 8),0x78);
      lVar15 = *(long *)(unaff_x19 + 0xc0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar14 = *(long *)(unaff_x19 + 0x40);
      lVar15 = lVar15 + uVar10;
      uVar10 = uVar10 + 1;
      lVar17 = lVar17 + 0x78;
      *(undefined1 *)(lVar15 + 0x20) = 0;
    } while (lVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



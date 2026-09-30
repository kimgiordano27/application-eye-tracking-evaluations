/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$RetrieveAnchors
ENTRY_POINT: 06386608
PROGRAM: Waifu-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__RetrieveAnchors
               (undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar5;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float unaff_s12;
  undefined8 unaff_d13;
  ulong in_stack_00000000;
  float in_stack_00000010;
  
  while( true ) {
    uVar12 = (undefined4)param_2;
    lVar5 = *(long *)(unaff_x19 + 0x68);
    uVar7 = FUN_07a67b60(0);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
LAB_0638681c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    ((undefined4 *)(lVar5 + unaff_x25))[-1] = uVar7;
    *(undefined4 *)(lVar5 + unaff_x25) = uVar12;
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
    uVar11 = *(undefined8 *)(lVar5 + unaff_x25 + -4);
    fVar8 = (float)in_stack_00000000;
    in_stack_00000000 = CONCAT44(fVar8,in_stack_00000010);
    *(ulong *)(lVar5 + unaff_x25 + -4) =
         CONCAT44((fVar8 + (float)((ulong)uVar11 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20),
                  (in_stack_00000010 + (float)uVar11) * (float)unaff_d13);
    lVar5 = *(long *)(unaff_x19 + 0x50);
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    uVar7 = (*DAT_086ef688)();
                    /* try { // try from 06386684 to 06486a4f has its CatchHandler @ 06386684
                       catch() { ... } // from try @ 06386684 with catch @ 06386684
                       catch() { ... } // from try @ 063875d8 with catch @ 06386684
                       catch() { ... } // from try @ 06387f04 with catch @ 06386684
                       catch() { ... } // from try @ 0638857c with catch @ 06386684
                       catch() { ... } // from try @ 06388710 with catch @ 06386684
                       catch() { ... } // from try @ 06388778 with catch @ 06386684
                       catch() { ... } // from try @ 063888c0 with catch @ 06386684
                       catch() { ... } // from try @ 06388918 with catch @ 06386684
                       catch() { ... } // from try @ 06388950 with catch @ 06386684
                       catch() { ... } // from try @ 06388980 with catch @ 06386684
                       catch() { ... } // from try @ 06388a34 with catch @ 06386684
                       catch() { ... } // from try @ 06388bc8 with catch @ 06386684
                       catch() { ... } // from try @ 06388cb0 with catch @ 06386684 */
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
    *(undefined4 *)(lVar5 + unaff_x20 * 4 + 0x20) = uVar7;
LAB_0638669c:
    do {
      uVar11 = DAT_08440d58;
      unaff_x25 = unaff_x25 + 8;
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x25 == 0x3c) {
        if (DAT_086f0ab8 == (code *)0x0) {
          DAT_086f0ab8 = (code *)FUN_033d1b68(
                                             "UnityEngine.Internal.InputUnsafeUtility::GetAxis(System.String)"
                                             );
        }
        fVar8 = (float)(*DAT_086f0ab8)(uVar11);
        if (DAT_012edd80 < ABS(fVar8)) {
          pcVar4 = *(code **)(unaff_x24 + 0x698);
          fVar13 = *(float *)(unaff_x19 + 0x2c);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
            *(code **)(unaff_x24 + 0x698) = pcVar4;
          }
          fVar9 = (float)(*pcVar4)();
          pcVar4 = *(code **)(unaff_x22 + 0x8a0);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68("UnityEngine.Screen::get_width()");
            *(code **)(unaff_x22 + 0x8a0) = pcVar4;
          }
          iVar1 = (*pcVar4)();
          pcVar4 = *(code **)(unaff_x27 + 0x8a8);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68("UnityEngine.Screen::get_height()");
            *(code **)(unaff_x27 + 0x8a8) = pcVar4;
          }
          iVar2 = (*pcVar4)();
          pcVar4 = *(code **)(unaff_x24 + 0x698);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
            *(code **)(unaff_x24 + 0x698) = pcVar4;
          }
          fVar10 = (float)(*pcVar4)();
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x28 + 0x1f8) + 0xb8) + 0x38);
          if (lVar5 != 0) {
            fVar8 = fVar8 * fVar13;
                    /* WARNING: Could not recover jumptable at 0x063867e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar5 + 0x18))
                      (((fVar8 / (float)(iVar2 + iVar1)) * 0.5) / fVar10,fVar8 / fVar9,
                       *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
            return;
          }
        }
        return;
      }
      pcVar4 = (code *)unaff_x26[0x13e];
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68(unaff_x21);
        unaff_x26[0x13e] = pcVar4;
      }
      uVar3 = (*pcVar4)(unaff_x20 & 0xffffffff);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_063868cc();
        if ((uVar3 & 1) != 0) goto LAB_0638669c;
        lVar5 = *(long *)(unaff_x19 + 0x60);
        if (lVar5 == 0) goto LAB_06386820;
        uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar3 <= unaff_x20) goto LAB_0638681c;
        if ((unaff_x25 == 0x24) && (*(char *)(lVar5 + unaff_x20 + 0x20) == '\0')) {
          lVar5 = *(long *)(unaff_x19 + 0x50);
          if (DAT_086ef688 == (code *)0x0) {
            DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
          }
          uVar7 = (*DAT_086ef688)();
          if (lVar5 == 0) goto LAB_06386820;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0638681c;
          *(undefined4 *)(lVar5 + 0x20) = uVar7;
          lVar5 = *(long *)(unaff_x19 + 0x60);
          if (lVar5 == 0) goto LAB_06386820;
          uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
        }
        if (uVar3 <= unaff_x20) goto LAB_0638681c;
        *(undefined1 *)(lVar5 + unaff_x20 + 0x20) = 1;
        lVar5 = *(long *)(unaff_x19 + 0x38);
        uVar7 = FUN_07a67b60(0);
        if (lVar5 == 0) goto LAB_06386820;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
        ((undefined4 *)(lVar5 + unaff_x25))[-1] = uVar7;
        *(undefined4 *)(lVar5 + unaff_x25) = (int)in_stack_00000000;
        lVar5 = *(long *)(unaff_x19 + 0x68);
        uVar7 = FUN_07a67b60(0);
        if (lVar5 == 0) goto LAB_06386820;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
        ((undefined4 *)(lVar5 + unaff_x25))[-1] = uVar7;
        *(undefined4 *)(lVar5 + unaff_x25) = (int)in_stack_00000000;
        if (unaff_x25 == 0x24) {
          lVar5 = *(long *)(unaff_x19 + 0x48);
          uVar7 = FUN_07a67b60(0);
          if (lVar5 == 0) goto LAB_06386820;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0638681c;
          *(undefined4 *)(lVar5 + 0x20) = uVar7;
          *(int *)(lVar5 + 0x24) = (int)in_stack_00000000;
        }
        lVar5 = **(long **)(*(long *)(unaff_x28 + 0x1f8) + 0xb8);
        if (lVar5 != 0) {
          FUN_07a67b60(0);
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),unaff_x20 & 0xffffffff,
                     *(undefined8 *)(lVar5 + 0x28));
        }
      }
      if (DAT_086f09f8 == (code *)0x0) {
        DAT_086f09f8 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
      }
      uVar3 = (*DAT_086f09f8)(unaff_x20 & 0xffffffff);
      fVar8 = (float)in_stack_00000000;
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x60);
        if (lVar5 == 0) goto LAB_06386820;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
        if (*(char *)(lVar5 + unaff_x20 + 0x20) != '\0') {
          *(undefined1 *)(lVar5 + unaff_x20 + 0x20) = 0;
          if (unaff_x25 == 0x24) {
            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_06386820;
            if (*(int *)(*(long *)(unaff_x19 + 0x68) + 0x18) == 0) goto LAB_0638681c;
            FUN_07a67b60(0);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06386820;
            if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) == 0) goto LAB_0638681c;
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06386820;
            if (*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) == 0) goto LAB_0638681c;
            FUN_06386a30();
          }
          lVar5 = *(long *)(unaff_x19 + 0x68);
          if (DAT_086d8912 == '\0') {
            FUN_0335b6c8(&DAT_083d2c48,1);
            DataMemoryBarrier(2,3);
            DAT_086d8912 = '\x01';
          }
          if (lVar5 == 0) goto LAB_06386820;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
          *(undefined8 *)(lVar5 + unaff_x25 + -4) = **(undefined8 **)(DAT_083d2c48 + 0xb8);
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x28 + 0x1f8) + 0xb8) + 0x18);
          if (lVar5 != 0) {
            FUN_07a67b60(0);
            (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),unaff_x20 & 0xffffffff,
                       *(undefined8 *)(lVar5 + 0x28));
          }
          lVar5 = *(long *)(unaff_x19 + 0x38);
          if (lVar5 == 0) goto LAB_06386820;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0638681c;
          fVar9 = *(float *)(lVar5 + 0x20);
          fVar10 = *(float *)(lVar5 + 0x24);
          fVar13 = (float)FUN_07a67b60(0);
          if (DAT_086d7d53 == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d7d53 = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar9 = fVar9 - fVar13;
          fVar10 = fVar10 - fVar8;
          fVar10 = fVar10 * fVar10;
          in_stack_00000000 = (ulong)(uint)fVar10;
          if ((SQRT(fVar9 * fVar9 + fVar10) / *(float *)(unaff_x19 + 0x74) <=
               *(float *)(unaff_x19 + 0x20)) &&
             (lVar5 = *(long *)(*(long *)(*(long *)(unaff_x28 + 0x1f8) + 0xb8) + 0x28), lVar5 != 0))
          {
            FUN_07a67b60(0);
            (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),unaff_x20 & 0xffffffff,
                       *(undefined8 *)(lVar5 + 0x28));
          }
        }
      }
      lVar5 = *(long *)(unaff_x19 + 0x60);
      if (lVar5 == 0) goto LAB_06386820;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
    } while (*(char *)(lVar5 + unaff_x20 + 0x20) == '\0');
    in_stack_00000010 = (float)FUN_07a67b60(0);
    FUN_07a67b60(0);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_0638681c;
    fVar13 = (float)in_stack_00000000 - *(float *)(lVar5 + unaff_x25);
    fVar8 = in_stack_00000010 - ((float *)(lVar5 + unaff_x25))[-1];
    param_2 = (ulong)(uint)(fVar13 * fVar13);
    if (unaff_s12 <= fVar8 * fVar8 + fVar13 * fVar13) {
      pcVar4 = *(code **)(unaff_x24 + 0x698);
      fVar9 = *(float *)(unaff_x19 + 0x74);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
        *(code **)(unaff_x24 + 0x698) = pcVar4;
      }
      fVar10 = (float)(*pcVar4)();
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x28 + 0x1f8) + 0xb8) + 8);
      if (lVar5 != 0) {
        uVar11 = FUN_07a67b60(0);
        pcVar4 = *(code **)(unaff_x22 + 0x8a0);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.Screen::get_width()");
          *(code **)(unaff_x22 + 0x8a0) = pcVar4;
        }
        iVar1 = (*pcVar4)();
        pcVar4 = *(code **)(unaff_x27 + 0x8a8);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.Screen::get_height()");
          *(code **)(unaff_x27 + 0x8a8) = pcVar4;
        }
        iVar2 = (*pcVar4)();
        pcVar4 = *(code **)(unaff_x24 + 0x698);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
          *(code **)(unaff_x24 + 0x698) = pcVar4;
        }
        fVar6 = (float)(*pcVar4)();
        (**(code **)(lVar5 + 0x18))
                  (uVar11,param_2,(fVar8 / (float)iVar1) / fVar6,(fVar13 / (float)iVar2) / fVar6,
                   (fVar8 / fVar9) / fVar10,(fVar13 / fVar9) / fVar10,*(undefined8 *)(lVar5 + 0x40),
                   unaff_x20 & 0xffffffff,*(undefined8 *)(lVar5 + 0x28));
        unaff_x26 = &DAT_086f0000;
      }
    }
  }
LAB_06386820:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



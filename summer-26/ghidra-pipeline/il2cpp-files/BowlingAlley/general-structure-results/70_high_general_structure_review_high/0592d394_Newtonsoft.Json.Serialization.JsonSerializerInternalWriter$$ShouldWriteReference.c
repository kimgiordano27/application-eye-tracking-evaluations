/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 0592d394
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference(void)

{
  ushort uVar1;
  uint uVar2;
  undefined1 in_CY;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *unaff_x19;
  int iVar7;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  while (!(bool)in_CY) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar11 = uVar1 - 0x30;
    if (uVar11 != 0) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (9 < uVar11) {
        uVar9 = unaff_w24;
        uVar11 = 0;
        goto LAB_0592d520;
      }
      uVar10 = unaff_w24 + 1;
      uVar9 = unaff_w24 + 9;
      iVar7 = -8;
      goto LAB_0592d3dc;
    }
    unaff_w24 = unaff_w24 + 1;
    in_CY = unaff_w23 <= unaff_w24;
  }
  uVar11 = 0;
  goto LAB_0592d630;
  while( true ) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar7 + 9) * 2);
    uVar10 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (9 < uVar1 - 0x30) {
      bVar3 = false;
      uVar9 = unaff_w24 + iVar7 + 9;
      goto LAB_0592d524;
    }
    uVar10 = unaff_w24 + iVar7 + 10;
    bVar3 = iVar7 == -1;
    iVar7 = iVar7 + 1;
    uVar2 = ((uint)uVar1 + uVar11 * 10) - 0x30;
    uVar11 = uVar2;
    if (bVar3) break;
LAB_0592d3dc:
    if (unaff_w23 <= uVar10) goto LAB_0592d630;
  }
  if (uVar10 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (uVar1 - 0x30 < 10) {
      uVar11 = (uVar1 - 0x30) + uVar2 * 10;
      uVar9 = unaff_w24 + 10;
      iVar7 = 2 - in_stack_00000018._4_4_;
      if (-1 < 1 - in_stack_00000018._4_4_) {
        iVar7 = 1 - in_stack_00000018._4_4_;
      }
      bVar4 = (ulong)(uint)(iVar7 >> 1) + 0x7fffffff < (ulong)uVar11;
      bVar3 = 0xccccccc < (int)uVar2 || bVar4;
      if (uVar9 < unaff_w23) {
        do {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          uVar10 = (uint)uVar1;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (9 < uVar1 - 0x30) goto LAB_0592d524;
          uVar9 = uVar9 + 1;
          bVar3 = true;
        } while (unaff_w23 != uVar9);
      }
      else if (0xccccccc >= (int)uVar2 && !bVar4) goto LAB_0592d630;
    }
    else {
LAB_0592d520:
      uVar10 = (uint)uVar1;
      bVar3 = false;
LAB_0592d524:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0592d5fc;
        uVar9 = uVar9 + 1;
        if ((int)uVar9 < (int)unaff_w23) {
          puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          do {
            if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            uVar1 = *puVar8;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0592d5a0;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (unaff_w23 != uVar9);
        }
        else {
LAB_0592d5a0:
          if (uVar9 < unaff_w23) goto LAB_0592d5b4;
        }
      }
      else {
LAB_0592d5b4:
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar5 = FUN_0592fca4();
        if ((uVar5 & 1) == 0) {
LAB_0592d5fc:
          in_stack_00000018._4_4_ = 0;
          uVar6 = 0;
          goto LAB_0592d604;
        }
      }
      if (!bVar3) goto LAB_0592d630;
    }
    in_stack_00000018._4_4_ = 0;
    uVar6 = 0;
    *unaff_x27 = 1;
    goto LAB_0592d604;
  }
LAB_0592d630:
  uVar6 = 1;
  in_stack_00000018._4_4_ = uVar11 * in_stack_00000018._4_4_;
LAB_0592d604:
  *unaff_x19 = in_stack_00000018._4_4_;
  return uVar6;
}



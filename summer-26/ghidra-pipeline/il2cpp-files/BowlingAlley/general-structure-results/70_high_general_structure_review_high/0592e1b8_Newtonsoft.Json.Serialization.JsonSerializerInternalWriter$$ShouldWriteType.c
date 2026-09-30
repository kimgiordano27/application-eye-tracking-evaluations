/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 0592e1b8
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


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(long param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar7;
  uint unaff_w24;
  uint uVar8;
  long *unaff_x25;
  long lVar9;
  uint uVar10;
  ulong unaff_x28;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    param_1 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar10 = *(uint *)(lVar5 + 0x18);
  if (((uint)unaff_x28 < uVar10) && (*(int *)(lVar5 + (unaff_x28 & 0xffffffff) * 4 + 0x20) != 0xff))
  {
    if ((uint)unaff_x28 == 0x30) {
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w21 <= unaff_w24) {
          lVar9 = 0;
          goto LAB_0592e430;
        }
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
        unaff_x28 = (ulong)uVar1;
      } while (unaff_x28 == 0x30);
      if ((uVar1 < uVar10) && (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) != 0xff)) goto LAB_0592e2ac;
      lVar9 = 0;
      uVar8 = unaff_w24;
LAB_0592e22c:
      uVar10 = 0;
LAB_0592e380:
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (((int)unaff_x28 - 9U < 5) || ((int)unaff_x28 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) goto LAB_0592e39c;
        uVar8 = uVar8 + 1;
        if ((int)uVar8 < (int)unaff_w21) {
          puVar7 = (ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w21 <= uVar8) goto LAB_0592e490;
            uVar1 = *puVar7;
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0592e424;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w21 != uVar8);
        }
        else {
LAB_0592e424:
          if (uVar8 < unaff_w21) goto LAB_0592e440;
        }
        if (uVar10 == 0) goto LAB_0592e430;
      }
      else {
LAB_0592e440:
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar4 = FUN_0592fca4();
        if ((uVar4 & 1) == 0) {
          lVar9 = 0;
        }
        if ((uVar10 & uVar4) == 0) goto LAB_0592e3a4;
      }
    }
    else {
LAB_0592e2ac:
      if (uVar10 <= (uint)unaff_x28) {
LAB_0592e490:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar9 = (long)*(int *)(lVar5 + (unaff_x28 & 0xffffffff) * 4 + 0x20);
      uVar4 = unaff_w24 + 1;
      uVar8 = unaff_w24 + 0x10;
      iVar6 = -0xf;
      do {
        if (unaff_w21 <= uVar4) goto LAB_0592e430;
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar6 + 0x10) * 2);
        unaff_x28 = (ulong)uVar1;
        if ((uVar10 <= uVar1) || (iVar2 = *(int *)(lVar5 + unaff_x28 * 4 + 0x20), iVar2 == 0xff)) {
          uVar10 = 0;
          uVar8 = unaff_w24 + iVar6 + 0x10;
          goto LAB_0592e380;
        }
        uVar4 = unaff_w24 + iVar6 + 0x11;
        bVar3 = iVar6 != -1;
        iVar6 = iVar6 + 1;
        lVar9 = (long)iVar2 + lVar9 * 0x10;
      } while (bVar3);
      if (unaff_w21 <= uVar4) {
LAB_0592e430:
        uVar4 = 1;
        goto LAB_0592e3a4;
      }
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
      unaff_x28 = (ulong)uVar1;
      if ((uVar10 <= uVar1) || (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0xff)) goto LAB_0592e22c;
      uVar8 = unaff_w24 + 0x11;
      if (uVar8 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar8 * 2);
          unaff_x28 = (ulong)uVar1;
          if ((uVar10 <= uVar1) || (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0xff)) {
            uVar10 = 1;
            goto LAB_0592e380;
          }
          uVar8 = uVar8 + 1;
        } while (unaff_w21 != uVar8);
      }
    }
    lVar9 = 0;
    uVar4 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_0592e39c:
    lVar9 = 0;
    uVar4 = 0;
  }
LAB_0592e3a4:
  *unaff_x19 = lVar9;
  return uVar4 & 1;
}



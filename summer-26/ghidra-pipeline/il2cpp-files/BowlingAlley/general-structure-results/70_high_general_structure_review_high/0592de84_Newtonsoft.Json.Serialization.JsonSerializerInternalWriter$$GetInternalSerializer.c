/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 0592de84
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar7;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *unaff_x26;
  undefined1 *unaff_x27;
  ulong uVar12;
  int in_stack_00000010;
  
  for (; unaff_w24 < unaff_w23; unaff_w24 = unaff_w24 + 1) {
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar10 = (uint)uVar3;
    uVar8 = uVar3 - 0x30;
    if (uVar8 != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (9 < uVar8) {
        uVar12 = 0;
        bVar4 = false;
        goto LAB_0592e004;
      }
      uVar10 = unaff_w24 + 1;
      uVar12 = (ulong)uVar8;
      iVar9 = -0x11;
      goto LAB_0592ded4;
    }
  }
  uVar12 = 0;
  goto LAB_0592e128;
  while( true ) {
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9 + 0x12) * 2);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (9 < uVar3 - 0x30) {
      uVar11 = (ulong)(uint)uVar3;
      uVar8 = unaff_w24 + iVar9 + 0x12;
      goto LAB_0592dff4;
    }
    uVar10 = unaff_w24 + iVar9 + 0x13;
    bVar4 = iVar9 == -1;
    iVar9 = iVar9 + 1;
    uVar12 = ((ulong)uVar3 + uVar12 * 10) - 0x30;
    if (bVar4) break;
LAB_0592ded4:
    if (unaff_w23 <= uVar10) goto LAB_0592e128;
  }
  if (uVar10 < unaff_w23) {
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 0x12) * 2);
    uVar11 = (ulong)uVar3;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar8 = unaff_w24 + 0x12;
    if (uVar3 - 0x30 < 10) {
      bVar2 = 0xccccccccccccccc < (long)uVar12;
      iVar9 = 2 - in_stack_00000010;
      if (-1 < 1 - in_stack_00000010) {
        iVar9 = 1 - in_stack_00000010;
      }
      uVar12 = (uVar11 + uVar12 * 10) - 0x30;
      unaff_w24 = unaff_w24 + 0x13;
      bVar1 = (ulong)(uint)(iVar9 >> 1) + 0x7fffffffffffffff < uVar12;
      bVar4 = bVar2 || bVar1;
      if (unaff_w24 < unaff_w23) {
        do {
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          uVar10 = (uint)uVar3;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (9 < uVar3 - 0x30) goto LAB_0592e004;
          unaff_w24 = unaff_w24 + 1;
          bVar4 = true;
        } while (unaff_w23 != unaff_w24);
      }
      else if (!bVar2 && !bVar1) goto LAB_0592e128;
    }
    else {
LAB_0592dff4:
      unaff_w24 = uVar8;
      bVar4 = false;
      uVar10 = (uint)uVar11;
LAB_0592e004:
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0592e0ec;
        uVar8 = unaff_w24 + 1;
        if ((int)uVar8 < (int)unaff_w23) {
          puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
          do {
            if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            uVar3 = *puVar7;
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592e078;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (unaff_w23 != uVar8);
        }
        else {
LAB_0592e078:
          if (uVar8 < unaff_w23) goto LAB_0592e08c;
        }
      }
      else {
LAB_0592e08c:
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_0592fca4();
        if ((uVar11 & 1) == 0) {
LAB_0592e0ec:
          lVar6 = 0;
          uVar5 = 0;
          goto LAB_0592e0f4;
        }
      }
      if (!bVar4) goto LAB_0592e128;
    }
    lVar6 = 0;
    uVar5 = 0;
    *unaff_x27 = 1;
    goto LAB_0592e0f4;
  }
LAB_0592e128:
  uVar5 = 1;
  lVar6 = uVar12 * (long)in_stack_00000010;
LAB_0592e0f4:
  *unaff_x19 = lVar6;
  return uVar5;
}



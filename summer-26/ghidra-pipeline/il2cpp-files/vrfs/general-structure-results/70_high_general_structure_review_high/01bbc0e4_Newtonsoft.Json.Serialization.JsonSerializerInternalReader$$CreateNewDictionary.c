/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 01bbc0e4
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary
               (long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int in_w8;
  int in_w9;
  uint uVar3;
  long in_x10;
  long lVar4;
  uint in_w11;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint in_w12;
  uint uVar8;
  long in_x13;
  ulong in_x14;
  uint in_w15;
  int iVar9;
  ulong uVar10;
  long in_x16;
  long lVar11;
  int in_w17;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  while( true ) {
    if (param_2 < in_w17 + 1) {
      in_w9 = in_w9 + 1;
    }
    else {
      param_2 = in_w17 + 1;
    }
    if ((in_w12 <= in_w15) || ((uint)in_x14 <= (uint)in_x16)) break;
    uVar5 = *(uint *)(in_x13 + 0x20);
    *(int *)(param_1 + in_x16 * 4 + 0x20) = param_2;
    if ((uint)in_x14 <= uVar5) break;
    *(int *)(param_1 + (long)(int)uVar5 * 4 + 0x20) = param_2;
    lVar4 = in_x10;
    uVar5 = in_w11;
    while( true ) {
      in_x10 = lVar4 + -1;
      in_w11 = uVar5 - 2;
      if ((int)in_x10 + -8 < 0) {
        if (in_w9 == 0) {
          return;
        }
        lVar4 = *(long *)(unaff_x20 + 0x30);
        if (lVar4 == 0) goto LAB_01bbc31c;
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        uVar5 = *(int *)(unaff_x20 + 0x38) - 1;
        goto LAB_01bbc1a4;
      }
      in_w12 = *(uint *)(unaff_x19 + 0x18);
      if ((in_w12 <= in_w11) ||
         (in_x14 = *(ulong *)(param_1 + 0x18), (in_x14 & 0xffffffff) <= lVar4 - 9U))
      goto LAB_01bbc334;
      iVar9 = *(int *)(unaff_x19 + (long)(int)in_w11 * 4 + 0x20);
      in_x16 = (long)iVar9;
      in_w17 = *(int *)(param_1 + in_x10 * 4);
      in_w15 = uVar5 - 3;
      in_x13 = unaff_x19 + (long)(int)in_w15 * 4;
      if (iVar9 != -1) break;
      lVar4 = *(long *)(unaff_x20 + 0x30);
      if (lVar4 == 0) goto LAB_01bbc31c;
      if ((*(uint *)(lVar4 + 0x18) <= in_w17 - 1U) ||
         (lVar4 = lVar4 + (long)(int)(in_w17 - 1U) * 4,
         *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1, in_w12 <= in_w15)) goto LAB_01bbc334;
      lVar4 = *unaff_x21;
      if (lVar4 == 0) goto LAB_01bbc31c;
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(in_x13 + 0x20)) goto LAB_01bbc334;
      *(char *)(lVar4 + (int)*(uint *)(in_x13 + 0x20) + 0x20) =
           (char)*(undefined4 *)(param_1 + in_x10 * 4);
      lVar4 = in_x10;
      uVar5 = in_w11;
    }
    param_2 = *(int *)(unaff_x20 + 0x38);
  }
LAB_01bbc334:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
LAB_01bbc1a4:
  uVar3 = ~uVar5;
  do {
    uVar12 = uVar3;
    uVar8 = uVar5;
    uVar5 = uVar8 - 1;
    uVar6 = (uint)uVar7;
    if (uVar6 <= uVar5) goto LAB_01bbc334;
    iVar9 = *(int *)(lVar4 + (long)(int)uVar5 * 4 + 0x20);
    uVar3 = uVar12 + 1;
  } while (iVar9 == 0);
  lVar11 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2) + 0x20;
  do {
    if (uVar6 <= uVar5) goto LAB_01bbc334;
    lVar1 = (long)(int)uVar5;
    uVar5 = uVar5 + 1;
    *(int *)(lVar4 + lVar1 * 4 + 0x20) = iVar9 + -1;
    if (uVar6 <= uVar5) goto LAB_01bbc334;
    iVar9 = *(int *)(lVar4 + lVar11) + 1;
    *(int *)(lVar4 + lVar11) = iVar9;
    in_w9 = in_w9 - (1 << (ulong)(uVar12 + *(int *)(unaff_x20 + 0x38) & 0x1f));
    uVar3 = *(int *)(unaff_x20 + 0x38) - 1;
    if (in_w9 < 1) {
      if (uVar6 <= uVar3) goto LAB_01bbc334;
      lVar11 = lVar4 + (long)(int)uVar3 * 4;
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + in_w9;
      uVar5 = *(int *)(unaff_x20 + 0x38) - 2;
      if (uVar6 <= uVar5) goto LAB_01bbc334;
      lVar11 = lVar4 + (long)(int)uVar5 * 4;
      *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) - in_w9;
      if (*(uint *)(unaff_x20 + 0x38) == 0) {
        return;
      }
      uVar5 = in_w8 << 1;
      uVar3 = *(uint *)(unaff_x20 + 0x38);
      goto LAB_01bbc274;
    }
    lVar11 = lVar11 + 4;
    uVar12 = uVar12 - 1;
  } while ((int)uVar5 < (int)uVar3);
  goto LAB_01bbc1a4;
LAB_01bbc274:
  uVar12 = uVar3 - 1;
  if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01bbc334;
  iVar9 = *(int *)(lVar4 + (long)(int)uVar12 * 4 + 0x20);
  uVar6 = uVar5;
  while (0 < iVar9) {
    uVar8 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if (uVar8 <= uVar6) goto LAB_01bbc334;
    uVar2 = *(int *)(unaff_x19 + (long)(int)uVar6 * 4 + 0x20) << 1;
    uVar10 = (long)(int)uVar2 | 1;
    if (uVar8 <= (uint)uVar10) goto LAB_01bbc334;
    uVar6 = uVar6 + 1;
    if (*(int *)(unaff_x19 + uVar10 * 4 + 0x20) == -1) {
      if (uVar8 <= uVar2) goto LAB_01bbc334;
      lVar4 = *unaff_x21;
      if (lVar4 == 0) goto LAB_01bbc31c;
      uVar5 = *(uint *)(unaff_x19 + (long)(int)uVar2 * 4 + 0x20);
      if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_01bbc334;
      *(char *)(lVar4 + (int)uVar5 + 0x20) = (char)uVar3;
      iVar9 = iVar9 + -1;
      uVar5 = uVar6;
    }
  }
  if (uVar12 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uVar3 = uVar12;
  if (lVar4 == 0) {
LAB_01bbc31c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  goto LAB_01bbc274;
}



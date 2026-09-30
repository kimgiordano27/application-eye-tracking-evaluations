/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 04ffd8b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  _iStack0000000000000008 = 0;
  *unaff_x20 = 0;
  lVar7 = unaff_x21[2];
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if ((DAT_06b79135 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06770f78);
    DAT_06b79135 = 1;
  }
  puVar10 = PTR_DAT_067763c8;
  puVar9 = PTR_DAT_06770f78;
  puVar8 = PTR_DAT_0675e258;
  if ((int)unaff_x21[1] <= (int)lVar7) {
LAB_04ffd9e4:
    *unaff_x19 = 6;
    return;
  }
  *unaff_x19 = 0xb;
  while( true ) {
    uVar4 = *(undefined2 *)((long)unaff_x21 + 0x14);
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04ff4630(uVar4,0);
    uVar5 = *(ushort *)((long)unaff_x21 + 0x14);
    if ((uVar11 & 1) != 0) break;
    if (*(int *)(*(long *)(puVar8 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f80ed4(uVar5,0);
    if ((uVar11 & 1) == 0) {
      if (unaff_x22 != 0) {
        FUN_04f5ab48();
        return;
      }
      goto LAB_04ffdb7c;
    }
    do {
      iVar1 = (int)unaff_x21[2] + 1;
      *(int *)(unaff_x21 + 2) = iVar1;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if ((DAT_06b79135 & 1) == 0) {
        FUN_02d6084c(puVar9);
        DAT_06b79135 = 1;
      }
      if ((int)*(uint *)(unaff_x21 + 1) <= iVar1) goto LAB_04ffd9e4;
      if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) goto LAB_04ffdb78;
      uVar4 = *(undefined2 *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2);
      *(undefined2 *)((long)unaff_x21 + 0x14) = uVar4;
      if (*(int *)(*(long *)(puVar8 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_04f80ed4(uVar4,0);
    } while ((uVar11 & 1) != 0);
  }
  *unaff_x20 = uVar5 - 0x30;
  puVar8 = PTR_DAT_06770f78;
  uVar2 = *(uint *)(unaff_x21 + 2);
  uVar3 = uVar2;
  while( true ) {
    *(uint *)(unaff_x21 + 2) = uVar3 + 1;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if ((DAT_06b79135 & 1) == 0) {
      FUN_02d6084c(puVar8);
      DAT_06b79135 = 1;
    }
    uVar6 = *(uint *)(unaff_x21 + 2);
    if ((int)*(uint *)(unaff_x21 + 1) <= (int)(uVar3 + 1)) break;
    if (*(uint *)(unaff_x21 + 1) <= uVar6) goto LAB_04ffdb78;
    uVar5 = *(ushort *)(*unaff_x21 + (long)(int)uVar6 * 2);
    *(ushort *)((long)unaff_x21 + 0x14) = uVar5;
    if (9 < uVar5 - 0x30) break;
    *unaff_x20 = (uint)uVar5 + *unaff_x20 * 10 + -0x30;
    uVar3 = *(uint *)(unaff_x21 + 2);
  }
  if ((int)(uVar6 - uVar2) < 9) {
    if ((int)(uVar6 - uVar2) < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = 2;
    }
    *unaff_x19 = uVar12;
  }
  else {
    *unaff_x19 = 1;
    *unaff_x20 = -1;
  }
  if ((char)unaff_x21[4] != '\0') {
    lVar7 = unaff_x21[2];
    uVar4 = *(undefined2 *)((long)unaff_x21 + 0x14);
    *(uint *)(unaff_x21 + 2) = uVar2;
    if (*(uint *)(unaff_x21 + 1) <= uVar2) {
LAB_04ffdb78:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined2 *)((long)unaff_x21 + 0x14) = *(undefined2 *)(*unaff_x21 + (long)(int)uVar2 * 2);
    if (unaff_x22 == 0) {
LAB_04ffdb7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar11 = FUN_04f5ab48();
    if ((uVar11 & 1) == 0) {
      *(int *)(unaff_x21 + 2) = (int)lVar7;
      *(undefined2 *)((long)unaff_x21 + 0x14) = uVar4;
    }
    else {
      *unaff_x19 = uStack000000000000000c;
      *unaff_x20 = iStack0000000000000008;
    }
  }
  return;
}



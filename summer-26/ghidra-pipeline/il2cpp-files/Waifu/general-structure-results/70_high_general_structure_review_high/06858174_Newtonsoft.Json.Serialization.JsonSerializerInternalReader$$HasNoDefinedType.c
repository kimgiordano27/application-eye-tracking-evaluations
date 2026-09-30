/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 06858174
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long *unaff_x20;
  uint unaff_w23;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x26;
  
  do {
    FUN_06857698();
    do {
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_068581b0;
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_068581b4;
      plVar7 = (long *)unaff_x20[2];
      if (plVar7 == (long *)0x0) goto LAB_068581b0;
      lVar3 = *plVar7;
      uVar8 = *(undefined8 *)(lVar4 + (long)(int)unaff_w19 * 8 + 0x20);
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(unaff_x26 + 0x5d0)) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_068580c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x26 + 0x5d0),0);
LAB_068580c4:
      iVar1 = (*(code *)*puVar2)(plVar7,uVar8);
    } while (iVar1 < 0);
    do {
      if (*unaff_x20 == 0) {
LAB_068581b0:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      unaff_w23 = unaff_w23 - 1;
      if (*(uint *)(*unaff_x20 + 0x18) <= unaff_w23) {
LAB_068581b4:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar7 = (long *)unaff_x20[2];
      if (plVar7 == (long *)0x0) goto LAB_068581b0;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(unaff_x26 + 0x5d0)) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06858150;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x26 + 0x5d0),0);
LAB_06858150:
      iVar1 = (*(code *)*puVar2)(plVar7);
    } while (iVar1 < 0);
    if ((int)unaff_w23 <= (int)unaff_w19) {
      FUN_06857698();
      return unaff_w19;
    }
  } while( true );
}



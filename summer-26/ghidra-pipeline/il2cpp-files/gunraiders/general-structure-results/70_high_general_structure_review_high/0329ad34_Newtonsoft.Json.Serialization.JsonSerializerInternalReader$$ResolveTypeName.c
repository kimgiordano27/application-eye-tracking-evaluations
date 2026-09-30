/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 0329ad34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 in_w8;
  ulong unaff_x19;
  int iVar8;
  uint uVar9;
  long unaff_x23;
  long unaff_x24;
  long *plVar10;
  
  *(undefined1 *)(unaff_x24 + 0xcd7) = in_w8;
  if ((unaff_x23 != 0) &&
     (lVar5 = FUN_031548e4(),
     puVar3 = Method_System_Collections_Generic_Dictionary<byte,_object>__ctor__,
     puVar2 = PTR_DAT_0422fa70, lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x10)) {
      iVar8 = 0;
      do {
        uVar4 = FUN_0314e438(lVar5,iVar8,0);
        if (0x7f < uVar4) {
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar6 = FUN_03295500();
          lVar5 = FUN_03156ba0(lVar5,uVar6,0);
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar5 + 0x10));
    }
    uVar6 = FUN_01c5d2fc(*(undefined8 *)puVar2,4);
    FUN_032032f0(uVar6,*(undefined8 *)puVar3,0);
    if ((lVar5 != 0) && (lVar5 = FUN_03155528(lVar5,uVar6,0), lVar5 != 0)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      if (0 < (int)uVar6) {
        uVar9 = 0;
        do {
          if ((uint)uVar6 <= uVar9) {
LAB_0329aec0:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          plVar10 = (long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_0329aec4;
          uVar1 = uVar9 + 1;
          if ((uVar1 != (uint)uVar6) || (*(int *)(lVar7 + 0x10) != 0)) {
            if ((unaff_x19 & 1) == 0) {
              lVar7 = FUN_0329b0fc();
            }
            else {
              lVar7 = FUN_0329aec8();
            }
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
            if ((uint)uVar6 <= uVar9) goto LAB_0329aec0;
            *plVar10 = lVar7;
          }
          if ((uint)uVar6 <= uVar9) goto LAB_0329aec0;
          if (lVar7 == 0) goto LAB_0329aec4;
          uVar9 = uVar1;
        } while ((int)uVar1 < (int)(uint)uVar6);
      }
      FUN_03153af8(*(undefined8 *)PTR_DAT_04230ad8,lVar5,0);
      return;
    }
  }
LAB_0329aec4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



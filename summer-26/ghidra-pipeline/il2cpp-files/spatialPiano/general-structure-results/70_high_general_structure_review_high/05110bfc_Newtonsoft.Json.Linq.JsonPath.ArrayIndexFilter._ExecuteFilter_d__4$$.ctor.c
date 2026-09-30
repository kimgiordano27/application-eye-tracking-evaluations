/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$.ctor
ENTRY_POINT: 05110bfc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


long Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  long lVar8;
  uint in_w10;
  undefined4 unaff_w19;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  while( true ) {
    if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(unaff_x24);
    }
    (**(code **)(param_1 + 0x1b8))(unaff_x24,*(undefined8 *)(param_1 + 0x1c0));
    uVar3 = FUN_04f6d990();
    if ((uVar3 & 1) != 0) {
      if (unaff_x23 == 0) {
        unaff_x23 = thunk_FUN_02f45270(*unaff_x27);
        FUN_03abf17c(unaff_x23,2,*unaff_x28);
        if (unaff_x23 == 0) goto LAB_05110da4;
      }
      lVar6 = *(long *)(unaff_x23 + 0x10);
      lVar8 = *unaff_x29;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05110da4;
      uVar2 = *(uint *)(unaff_x23 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
        *(long **)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = unaff_x24;
      }
      else {
        FUN_03abf904(unaff_x23,unaff_x24,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    unaff_w26 = unaff_w26 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w26) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w26) goto LAB_05110da8;
    unaff_x24 = *(long **)(unaff_x22 + (long)(int)unaff_w26 * 8 + 0x20);
    if (unaff_x24 == (long *)0x0) goto LAB_05110da4;
    param_3 = *unaff_x25;
    param_1 = *unaff_x24;
    in_w10 = (uint)*(byte *)(param_1 + 0x130);
    in_x9 = (ulong)*(byte *)(param_3 + 0x130);
  }
  if (unaff_x23 == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = FUN_03ac12f8(unaff_x23,*(undefined8 *)System_Xml_XmlNode_var);
    if (lVar6 == 0) {
LAB_05110da4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      uVar3 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar3) {
LAB_05110da8:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar9 = *(long *)(lVar6 + 0x20 + uVar3 * 8);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_0510db1c(lVar9,unaff_w19);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          bVar1 = lVar8 != 0;
          lVar8 = lVar9;
          if (bVar1) {
            uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067d9b28);
            uVar4 = FUN_05116b30(uVar4,0);
            thunk_FUN_02f6ef30(PTR_DAT_067d94b0);
            uVar5 = thunk_FUN_02f45270();
            FUN_050147b4(uVar5,uVar4,0);
            uVar4 = thunk_FUN_02f6ef30(
                                      System_Runtime_Serialization_XmlObjectSerializerWriteContext_var
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar5,uVar4);
          }
        }
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  return lVar8;
}



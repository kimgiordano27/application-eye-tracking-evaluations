/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader.<ReaderReadAndAssertAsync>d__2$$SetStateMachine
ENTRY_POINT: 01709d64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


long Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2__SetStateMachine(void)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar8;
  ushort *puVar9;
  
  *(undefined1 *)(unaff_x22 + 0x9ca) = in_w8;
  if (unaff_x20 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(StringLiteral_3570);
    FUN_016ec5b8(uVar6,uVar5,0);
LAB_01709f98:
    uVar5 = thunk_FUN_00d48444(
                              System_Collections_Generic_Dictionary<Type,_List<fsObjectProcessor>>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar5);
  }
  if ((unaff_w19 & 0xdfffffe0) != 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
                              );
    uVar7 = thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__)
    ;
    FUN_016ec624(uVar6,uVar5,uVar7,0);
    goto LAB_01709f98;
  }
  if (*(int *)(unaff_x20 + 0x10) == 0) {
    lVar8 = *(long *)OVRVirtualKeyboard_<>c_TypeInfo;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_00d59478(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
  }
  else {
    lVar4 = FUN_00da4fb8(*(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                         ,*(int *)(unaff_x20 + 0x10) << 1);
    iVar3 = thunk_FUN_00d402ac(0);
    puVar1 = System_Func<Spectrum_Point,_float>_TypeInfo;
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 0)) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(lVar4 + 0x20);
    }
    if ((unaff_w19 & 0x10000001) == 0) {
      if (lVar4 == 0) goto LAB_01709f14;
      FUN_0179ee8c(unaff_x20 + iVar3,puVar9,(long)*(int *)(lVar4 + 0x18),
                   (long)*(int *)(lVar4 + 0x18),0);
    }
    else if (0 < *(int *)(unaff_x20 + 0x10)) {
      lVar4 = 0;
      do {
        uVar2 = FUN_015fa29c();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        if (uVar2 - 0x61 < 0x1a) {
          uVar2 = uVar2 - 0x20;
        }
        *puVar9 = uVar2;
        lVar4 = lVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar4 < *(int *)(unaff_x20 + 0x10));
    }
  }
  puVar1 = Method_UnityEngine_GameObject_AddComponent<DOTweenComponent>__;
  uVar5 = (**(code **)(*unaff_x21 + 0x188))();
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    FUN_0172a334(lVar4,uVar5);
    return lVar4;
  }
LAB_01709f14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



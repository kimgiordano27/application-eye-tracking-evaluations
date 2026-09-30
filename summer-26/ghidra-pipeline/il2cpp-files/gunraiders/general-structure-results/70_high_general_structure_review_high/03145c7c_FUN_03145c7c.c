/*
FUNCTION_NAME: FUN_03145c7c
ENTRY_POINT: 03145c7c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03145c7c(long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  if ((DAT_045320c8 & 1) == 0) {
    FUN_01c5d288(System_Xml_XmlTextWriter_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(System_Net_Cache_RequestCache_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fa60);
    DAT_045320c8 = 1;
  }
  if ((param_2 == 0) || (param_1 == (long *)0x0)) goto LAB_03145f58;
  iVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar5 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  puVar1 = System_Net_Cache_RequestCache_TypeInfo;
  if (iVar4 != iVar3 >> 3) {
    uVar8 = thunk_FUN_01c273e8(UnityEngine_ProBuilder_ShapeType_TypeInfo);
    uVar5 = FUN_03146988(uVar8,uVar5);
    thunk_FUN_01c273e8(PTR_DAT_0422fd40);
    uVar8 = thunk_FUN_01c496e0();
    FUN_03184c3c(uVar8,uVar5,0);
    uVar5 = thunk_FUN_01c273e8(Unity_Mathematics_bool4x4_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar8,uVar5);
  }
  if (*(int *)(*(long *)System_Net_Cache_RequestCache_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar6 = FUN_031a2994(uVar5,0);
  puVar2 = System_Xml_XmlTextWriter_TypeInfo;
  lVar7 = param_2;
  if (lVar6 != 0) {
    lVar7 = thunk_FUN_01c496e0(*(undefined8 *)System_Xml_XmlTextWriter_TypeInfo);
    FUN_0313e8d8(lVar7,0x30,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_031a35f4(lVar6,0);
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_0313e934(uVar8,uVar5,0);
    if (lVar7 == 0) goto LAB_03145f58;
    FUN_0313ec60(lVar7,uVar8,0);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_0313e8d8(uVar5,5,0);
    FUN_0313ec60(lVar7,uVar5,0);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_0313e904(uVar5,4,param_2,0);
    plVar9 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_0313e8d8(plVar9,0x30,0);
    if (plVar9 == (long *)0x0) goto LAB_03145f58;
    FUN_0313ec60(plVar9,lVar7,0);
    FUN_0313ec60(plVar9,uVar5,0);
    lVar7 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    if (lVar7 == 0) goto LAB_03145f58;
  }
  puVar2 = PTR_DAT_0422fa60;
  puVar1 = PTR_DAT_0422f930;
  FUN_032fe3d4(param_2,0,lVar7,*(int *)(lVar7 + 0x18) - *(int *)(param_2 + 0x18),
               *(int *)(param_2 + 0x18),0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  iVar4 = FUN_032d2a94(8,(param_3 - *(int *)(lVar7 + 0x18)) + -3,0);
  lVar6 = FUN_01c5d2fc(*(undefined8 *)puVar1,iVar4 + 3 + *(int *)(lVar7 + 0x18));
  if (lVar6 != 0) {
    uVar11 = *(ulong *)(lVar6 + 0x18);
    if (1 < (uint)uVar11) {
      *(undefined1 *)(lVar6 + 0x21) = 1;
      if (2 < (int)(iVar4 + 2U)) {
        lVar10 = 0;
        do {
          if ((uVar11 & 0xffffffff) <= lVar10 + 2U) goto LAB_03145f54;
          *(undefined1 *)(lVar6 + 0x22 + lVar10) = 0xff;
          lVar10 = lVar10 + 1;
        } while ((ulong)(iVar4 + 2U) - 2 != lVar10);
      }
      FUN_032fe3d4(lVar7,0,lVar6,iVar4 + 3,*(undefined4 *)(lVar7 + 0x18),0);
      return lVar6;
    }
LAB_03145f54:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_03145f58:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



/*
FUNCTION_NAME: FUN_06979ff4
ENTRY_POINT: 06979ff4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_16
*/


void FUN_06979ff4(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_076e1c95 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_Exists__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_RemoveAll__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Sort__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_get_Count__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_get_Item__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<PresetHelper_PresetType>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_get_Count__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07280228);
    thunk_FUN_032e1da0(PTR_DAT_07287a48);
    thunk_FUN_032e1da0(PTR_DAT_0727eb68);
    thunk_FUN_032e1da0(PTR_DAT_07287a50);
    DAT_076e1c95 = 1;
  }
  local_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_78 = 0;
  if (param_1 == 0) goto LAB_0697a3d4;
  uVar4 = FUN_069680fc(param_1);
  switch(uVar4) {
  case 0:
    if (param_2 == (long *)0x0) {
LAB_0697a3d4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    (**(code **)(*param_2 + 0x228))(param_2,0x5b,*(undefined8 *)(*param_2 + 0x230));
    lVar8 = FUN_06966fa0(param_1);
    if (lVar8 == 0) goto LAB_0697a3d4;
    FUN_041e3694(&local_88,lVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_get_Count__
                );
    puVar2 = 
    Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_GetEnumerator__;
    bVar1 = false;
    while (uVar5 = FUN_052d44b4(&local_88,*(undefined8 *)puVar2), uVar6 = local_78, (uVar5 & 1) != 0
          ) {
      if (bVar1) {
        (**(code **)(*param_2 + 0x228))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x230));
      }
      bVar1 = true;
      FUN_06979ff4(uVar6,param_2);
    }
    FUN_052d44b0(&local_88,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Clear__
                );
    lVar8 = *param_2;
    uVar6 = 0x5d;
    break;
  case 1:
    if (param_2 == (long *)0x0) goto LAB_0697a3d4;
    (**(code **)(*param_2 + 0x228))(param_2,0x7b,*(undefined8 *)(*param_2 + 0x230));
    lVar8 = FUN_06969174(param_1);
    if (lVar8 == 0) goto LAB_0697a3d4;
    FUN_050f8f40(&local_70,lVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_Exists__
                );
    puVar3 = 
    Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_RemoveAll__;
    puVar2 = PTR_DAT_0727eb68;
    bVar1 = false;
    while (uVar5 = FUN_05391a64(&local_70,*(undefined8 *)puVar3), uVar7 = uStack_58,
          uVar6 = local_60, (uVar5 & 1) != 0) {
      if (bVar1) {
        (**(code **)(*param_2 + 0x228))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x230));
      }
      (**(code **)(*param_2 + 0x228))(param_2,0x22,*(undefined8 *)(*param_2 + 0x230));
      (**(code **)(*param_2 + 0x268))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x270));
      (**(code **)(*param_2 + 0x228))(param_2,0x22,*(undefined8 *)(*param_2 + 0x230));
      (**(code **)(*param_2 + 0x268))
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(*param_2 + 0x270));
      bVar1 = true;
      FUN_06979ff4(uVar7,param_2);
    }
    FUN_05391b84(&local_70,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PostProcessLayer_SerializedBundleRef>_GetEnumerator__
                );
    lVar8 = *param_2;
    uVar6 = 0x7d;
    break;
  case 2:
    FUN_0696e9a0(param_1);
    uVar6 = FUN_0697a4d0();
    if (param_2 == (long *)0x0) goto LAB_0697a3d4;
    lVar8 = *param_2;
    goto LAB_0697a3ac;
  case 3:
    uVar6 = FUN_0696b10c(param_1);
    if (param_2 == (long *)0x0) goto LAB_0697a3d4;
    pcVar10 = *(code **)(*param_2 + 600);
    uVar7 = *(undefined8 *)(*param_2 + 0x260);
    goto LAB_0697a3b4;
  case 4:
    uVar5 = FUN_0696e8f8(param_1);
    if (param_2 == (long *)0x0) goto LAB_0697a3d4;
    if ((uVar5 & 1) == 0) {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_07287a48;
    }
    else {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_07287a50;
    }
    goto LAB_0697a3a8;
  case 5:
    if (param_2 == (long *)0x0) goto LAB_0697a3d4;
    (**(code **)(*param_2 + 0x228))(param_2,0x22,*(undefined8 *)(*param_2 + 0x230));
    FUN_069683b0(param_1);
    uVar6 = FUN_06979c74();
    (**(code **)(*param_2 + 0x268))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x270));
    lVar8 = *param_2;
    uVar6 = 0x22;
    break;
  case 6:
    if (param_2 == (long *)0x0) goto LAB_0697a3d4;
    lVar8 = *param_2;
    puVar9 = (undefined8 *)PTR_DAT_07280228;
LAB_0697a3a8:
    uVar6 = *puVar9;
LAB_0697a3ac:
    pcVar10 = *(code **)(lVar8 + 0x268);
    uVar7 = *(undefined8 *)(lVar8 + 0x270);
LAB_0697a3b4:
    (*pcVar10)(param_2,uVar6,uVar7);
  default:
    goto switchD_0697a10c_default;
  }
  (**(code **)(lVar8 + 0x228))(param_2,uVar6,*(undefined8 *)(lVar8 + 0x230));
switchD_0697a10c_default:
  return;
}



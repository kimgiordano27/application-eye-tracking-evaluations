/*
FUNCTION_NAME: FUN_0251d074
ENTRY_POINT: 0251d074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] FUN_0251d074(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  double local_28;
  
  puVar2 = StringLiteral_13508;
  uVar10 = param_2._8_8_;
  dVar11 = param_2._0_8_;
  if ((DAT_037829e8 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(PTR_DAT_033eafc8);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Oculus_Platform_Request<ChallengeList>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_IntervalTree<RuntimeElement>_IntersectsWith__);
    thunk_FUN_00d48444(StringLiteral_13508);
    thunk_FUN_00d48444(StringLiteral_7287);
    DAT_037829e8 = 1;
  }
  lVar4 = *(long *)puVar2;
  local_28 = 0.0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_033eafc8;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_0251d340;
    FUN_012d239c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_Timeline_IntervalTree<RuntimeElement>_IntersectsWith__,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar7;
  }
  if (*(int *)(*(long *)Oculus_Platform_Request<ChallengeList>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_0251cf90(param_3,lVar7);
  if ((lVar4 == 0) ||
     (lVar4 = FUN_01602744(lVar4,0x3a,0,0),
     puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__, lVar4 == 0)) {
LAB_0251d340:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *(long *)(lVar4 + 0x18);
  if ((lVar7 != 0) && ((int)lVar7 < 5)) {
    local_28 = 0.0;
    if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar8 = *(undefined8 *)(lVar4 + ((lVar7 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01731954(0);
    uVar6 = FUN_01756bd0(uVar8,7,uVar5,&local_28,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_0202015c(uVar8,*(undefined8 *)StringLiteral_7287,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_0201bf00(lVar7,0);
      if ((uVar6 & 1) == 0) goto LAB_0251d328;
      local_28 = (double)FUN_01756550(uVar8,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01731954(0);
    uVar6 = FUN_01756bd0(uVar8,0xa7,uVar5,&local_28,0);
    if ((uVar6 & 1) != 0) {
      iVar3 = (int)*(long *)(lVar4 + 0x18);
      if (iVar3 < 4) {
        if (iVar3 < 2) {
          iVar3 = 0;
          dVar11 = 0.0;
        }
        else {
          iVar3 = FUN_0176ee4c(*(undefined8 *)
                                (lVar4 + ((*(long *)(lVar4 + 0x18) << 0x20) + -0x200000000 >> 0x1d)
                                + 0x20),0);
          dVar11 = (double)(iVar3 * 0x3c);
          if ((int)*(long *)(lVar4 + 0x18) < 3) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_0176ee4c(*(undefined8 *)
                                  (lVar4 + ((*(long *)(lVar4 + 0x18) << 0x20) + -0x300000000 >> 0x1d
                                           ) + 0x20),0);
          }
        }
        dVar11 = local_28 + dVar11 + (double)(iVar3 * 0xe10);
        uVar10 = 0;
      }
    }
  }
LAB_0251d328:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = dVar11;
  return auVar9;
}



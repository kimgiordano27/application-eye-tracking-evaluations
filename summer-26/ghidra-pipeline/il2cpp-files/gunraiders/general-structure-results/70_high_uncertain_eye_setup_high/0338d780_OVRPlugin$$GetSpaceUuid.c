/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 0338d780
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceUuid(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int iVar13;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xb28));
  *(undefined1 *)(unaff_x22 + 0x66a) = 1;
  iVar6 = FUN_0337e34c();
  if (iVar6 < 0) {
    return 0;
  }
  if ((unaff_x19 != 0) && (FUN_031548e4(), puVar3 = PTR_DAT_0422fb28, unaff_x21 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*unaff_x21 + 0x288))();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    uVar8 = FUN_032ea0d4(plVar7,0,0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)OVRGLTFLoader_<>c__DisplayClass27_0_TypeInfo);
    FUN_02d4f880(lVar9,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_Add__);
    puVar4 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
    puVar3 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
    iVar1 = *(int *)(unaff_x19 + 0x10);
    if (iVar6 + 1 < iVar1 + -1) {
      iVar13 = 0;
      iVar6 = iVar6 + 2;
      do {
        sVar5 = FUN_0314e438();
        if (sVar5 == 0x5d) {
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) {
            uVar10 = FUN_031548e4();
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            FUN_0338261c(uVar10,0);
            uVar10 = FUN_0338d9d0();
            if (lVar9 == 0) goto LAB_0338d9cc;
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0338d9cc;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              iVar13 = 0;
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
            }
            else {
              FUN_02d5004c(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              iVar13 = 0;
            }
          }
        }
        else if (sVar5 == 0x5b) {
          iVar13 = iVar13 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    if ((lVar9 != 0) &&
       (uVar10 = FUN_02d51a80(lVar9,*(undefined8 *)Method_TMPro_FastAction<bool>_Call__),
       plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0338d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar7 + 0x8f8))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x900));
      return uVar10;
    }
  }
LAB_0338d9cc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



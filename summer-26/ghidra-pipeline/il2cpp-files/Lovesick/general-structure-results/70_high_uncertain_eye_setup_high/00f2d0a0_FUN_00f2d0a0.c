/*
FUNCTION_NAME: FUN_00f2d0a0
ENTRY_POINT: 00f2d0a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_00f2d0a0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined2 local_44 [2];
  
  if ((DAT_037755ca & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_99__);
    thunk_FUN_00d48444(StringLiteral_64);
    thunk_FUN_00d48444(StringLiteral_11400);
    thunk_FUN_00d48444(StringLiteral_232);
    DAT_037755ca = 1;
  }
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  local_44[0] = 0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_00f2d364;
  FUN_0160bae4(*(long *)(param_1 + 0x20),0,0);
  sVar5 = FUN_00f2bd34(param_1,0);
  puVar4 = StringLiteral_232;
  if (sVar5 == 0x22) {
    lVar10 = *(long *)(param_1 + 0x18);
    if (lVar10 == 0) goto LAB_00f2d364;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < *(int *)(lVar10 + 0x10)) {
      iVar8 = iVar1 + 1;
      *(int *)(param_1 + 0x10) = iVar8;
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_99__;
      if (-2 < iVar1) {
        do {
          if (*(int *)(lVar10 + 0x10) <= iVar8) goto LAB_00f2d264;
          sVar5 = FUN_00f2bd34(param_1,0);
          if (sVar5 == 0x22) {
            iVar8 = *(int *)(param_1 + 0x10);
            goto LAB_00f2d264;
          }
          uVar6 = FUN_00f2bd34(param_1,0);
          if ((uVar6 & 0xffff) == 0x5c) {
            auVar12 = FUN_00f2c21c(param_1,local_44);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if ((auVar12._0_8_ & 0xff) == 0) {
              *param_2 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
              return auVar12;
            }
            if (*(long *)(param_1 + 0x20) == 0) break;
            FUN_0160cd0c(*(long *)(param_1 + 0x20),local_44[0],0);
            iVar8 = *(int *)(param_1 + 0x10);
          }
          else {
            if (*(long *)(param_1 + 0x20) == 0) break;
            FUN_0160cd0c(*(long *)(param_1 + 0x20),uVar6,0);
            if (*(long *)(param_1 + 0x18) == 0) break;
            if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) <= *(int *)(param_1 + 0x10)) {
              *param_2 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
              uVar9 = *(undefined8 *)puVar3;
              goto LAB_00f2d308;
            }
            iVar8 = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x10) = iVar8;
          }
          if (iVar8 < 0) goto LAB_00f2d2ec;
          lVar10 = *(long *)(param_1 + 0x18);
        } while (lVar10 != 0);
        goto LAB_00f2d364;
      }
LAB_00f2d264:
      if (-1 < iVar8) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2d364;
        if ((iVar8 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) &&
           (sVar5 = FUN_00f2bd34(param_1,0), sVar5 == 0x22)) {
          if (*(long *)(param_1 + 0x18) == 0) {
LAB_00f2d364:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(param_1 + 0x10) < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
            plVar7 = *(long **)(param_1 + 0x20);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            if (plVar7 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
              *param_2 = uVar9;
              lVar10 = *(long *)puVar4;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar4;
              }
              return *(undefined1 (*) [16])(*(long *)(lVar10 + 0xb8) + 8);
            }
            goto LAB_00f2d364;
          }
        }
      }
LAB_00f2d2ec:
      uVar9 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      puVar11 = (undefined8 *)StringLiteral_64;
      goto LAB_00f2d300;
    }
  }
  uVar9 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar11 = (undefined8 *)StringLiteral_11400;
LAB_00f2d300:
  *param_2 = uVar9;
  uVar9 = *puVar11;
LAB_00f2d308:
  auVar12 = FUN_00f2ba44(param_1,uVar9);
  return auVar12;
}



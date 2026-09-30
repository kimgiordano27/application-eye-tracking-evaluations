/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$GetBaseInstances
ENTRY_POINT: 0142d38c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__GetBaseInstances
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint uVar10;
  long lVar11;
  int iVar12;
  long unaff_x26;
  int unaff_w27;
  long lVar13;
  undefined8 *unaff_x29;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  long in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  while( true ) {
    FUN_0132138c(param_1,unaff_w27,param_3,param_4);
    if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) ||
       (lVar11 = *(long *)(CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x38),
       lVar11 == 0)) break;
    lVar9 = *unaff_x22;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
    }
    else {
      iVar12 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if (0 < iVar12) {
        FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar12,0);
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    unaff_w27 = unaff_w27 + 1;
    if (param_1 == 0) break;
    if (*(int *)(param_1 + 0x18) <= unaff_w27) {
      uVar3 = *(uint *)(unaff_x26 + 0x18);
      if ((int)uVar3 < 1) goto LAB_0142d514;
      lVar9 = 0;
      lVar11 = unaff_x26 + 0x20;
      goto LAB_0142d418;
    }
    param_4 = *unaff_x29;
    param_3 = (undefined8 *)&stack0x00000088;
  }
  goto LAB_0142d704;
  while( true ) {
    lVar13 = *(long *)(unaff_x19 + 0x90);
    uVar2 = FUN_02681c0c(lVar5,0);
    if (lVar13 == 0) goto LAB_0142d704;
    uStack0000000000000088 = uVar2;
    FUN_0129eff4(lVar13,&stack0x00000088,&stack0x00000080,*unaff_x21);
    if (in_stack_00000080 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_0142d734;
      plVar8 = *(long **)(lVar11 + lVar9 * 8);
      uVar7 = *(undefined8 *)StringLiteral_3316;
      if (plVar8 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_0142d704;
        uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      uVar7 = FUN_01600424(uVar7,uVar6,*unaff_x23,0);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x20);
      }
      FUN_02661754(uVar7,0);
    }
    else {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_0142d734;
      if (*(long *)(in_stack_00000080 + 0x38) == 0) goto LAB_0142d704;
      FUN_00ac8520(*(long *)(in_stack_00000080 + 0x38),*(undefined8 *)(lVar11 + lVar9 * 8),
                   *unaff_x24);
    }
    uVar3 = *(uint *)(unaff_x26 + 0x18);
    lVar9 = lVar9 + 1;
    if ((int)uVar3 <= (int)lVar9) break;
LAB_0142d418:
    uVar10 = (uint)lVar9;
    in_stack_00000080 = 0;
    if (uVar3 <= uVar10) {
LAB_0142d734:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar5 = *(long *)(lVar11 + lVar9 * 8);
    if (lVar5 == 0) goto LAB_0142d704;
  }
  param_1 = *(long *)(unaff_x19 + 0x98);
  if (param_1 != 0) {
LAB_0142d514:
    iVar12 = 0;
    bVar1 = true;
    do {
      if (*(int *)(param_1 + 0x18) <= iVar12) {
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return bVar1;
      }
      FUN_0132138c(param_1,iVar12,&stack0x00000088,*unaff_x29);
      if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) ||
         (lVar11 = *(long *)(CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x38),
         lVar11 == 0)) break;
      if (0 < *(int *)(lVar11 + 0x18)) {
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar12,&stack0x00000088,*unaff_x29);
        if (CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) break;
        *(undefined1 *)(CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x40) = 1;
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar12,&stack0x00000088,*unaff_x29);
        if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) ||
           (lVar11 = *(long *)(CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x38),
           lVar11 == 0)) break;
        uVar7 = FUN_01325140(lVar11,*(undefined8 *)
                                     Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                            );
        if (bVar1) {
          if (*(long *)(unaff_x19 + 0x98) == 0) break;
          FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar12,&stack0x00000088,*unaff_x29);
          if ((CONCAT44(uStack000000000000008c,uStack0000000000000088) == 0) ||
             (plVar8 = *(long **)(CONCAT44(uStack000000000000008c,uStack0000000000000088) + 0x10),
             plVar8 == (long *)0x0)) break;
          uVar3 = (**(code **)(*plVar8 + 0x8c8))
                            (plVar8,uVar7,uStack0000000000000048 & 1,uStack000000000000004c & 1,
                             uStack0000000000000050 & 1,uStack0000000000000054 & 1,
                             uStack0000000000000058 & 1,uStack000000000000005c & 1);
          uVar3 = uVar3 & 1;
        }
        else {
          uVar3 = 0;
        }
        bVar1 = uVar3 != 0;
      }
      param_1 = *(long *)(unaff_x19 + 0x98);
      iVar12 = iVar12 + 1;
    } while (param_1 != 0);
  }
LAB_0142d704:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



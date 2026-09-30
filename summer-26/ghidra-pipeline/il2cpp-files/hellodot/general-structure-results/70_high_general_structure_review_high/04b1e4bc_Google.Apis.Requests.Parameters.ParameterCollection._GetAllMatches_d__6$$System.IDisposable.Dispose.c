/*
FUNCTION_NAME: Google.Apis.Requests.Parameters.ParameterCollection.<GetAllMatches>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 04b1e4bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


ulong Google_Apis_Requests_Parameters_ParameterCollection_<GetAllMatches>d__6__System_IDisposable_Dispose
                (void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long *plVar10;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  
  do {
    plVar10 = *(long **)(unaff_x22 + 0x30);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
    lVar7 = unaff_x28 + unaff_x20 * unaff_x19;
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    uVar4 = *(undefined8 *)(lVar7 + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978(lVar5);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04b1e53c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar10,lVar5,0);
LAB_04b1e53c:
    uVar8 = (*(code *)*puVar2)(plVar10,uVar3,uVar4);
    if ((uVar8 & 1) != 0) {
LAB_04b1e584:
      return unaff_x24 & 0xffffffff;
    }
    do {
      uVar6 = (uint)*(undefined8 *)(unaff_x28 + 0x18);
      if ((int)uVar6 <= unaff_w29) {
        thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
        uVar3 = thunk_FUN_02cea894();
        uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e2698);
        FUN_04f30dfc(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar3,in_stack_00000008);
      }
      if (uVar6 <= (uint)unaff_x24) {
LAB_04b1e5a8:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar1 = *(uint *)(unaff_x28 + unaff_x20 * unaff_x19 + 0x24);
      unaff_x20 = (ulong)uVar1;
      unaff_w29 = unaff_w29 + 1;
      if ((int)uVar1 < 0) {
        unaff_x24 = 0xffffffff;
        goto LAB_04b1e584;
      }
      if (uVar6 <= uVar1) goto LAB_04b1e5a8;
      unaff_x24 = unaff_x20;
    } while (*(int *)(unaff_x28 + unaff_x20 * (unaff_x19 & 0xffffffff) + 0x20) != unaff_w23);
  } while( true );
}



/*
FUNCTION_NAME: UnityEngineInternal.WebRequestUtils$$.cctor
ENTRY_POINT: 06d1f93c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void UnityEngineInternal_WebRequestUtils___cctor
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  
  do {
    Unity_Collections_NativeArray<ulong>__Copy(param_1,param_2,unaff_w22,param_4);
    uVar4 = in_stack_00000020;
    uVar3 = uStack000000000000001c;
    uVar2 = uStack0000000000000018;
    uVar9 = in_stack_00000010;
    iVar1 = in_stack_00000008;
    uVar7 = FUN_057ab1f0(in_stack_00000010,0);
    lVar10 = *(long *)(unaff_x19 + 0x420);
    if (lVar10 == 0) {
LAB_06d1fa5c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_06d307e8(lVar10,uVar9,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x420) != 0) {
          uVar8 = FUN_06d30d58(*(long *)(unaff_x19 + 0x420),uVar9,0);
          uVar7 = uVar8;
          goto joined_r0x06d1f9e0;
        }
        goto LAB_06d1fa5c;
      }
    }
    else {
      iVar5 = FUN_06d2c7b4(lVar10,0);
      if (iVar1 <= iVar5 + -1) {
        if ((*(long *)(unaff_x19 + 0x420) == 0) ||
           (uVar8 = FUN_06d2c628(*(long *)(unaff_x19 + 0x420),iVar1,0), uVar8 == 0))
        goto LAB_06d1fa5c;
        uVar7 = FUN_057ab1f0(*(undefined8 *)(uVar8 + 0x10),0);
        uVar7 = uVar7 & 1;
joined_r0x06d1f9e0:
        if (uVar7 != 0) {
          lVar10 = *(long *)(unaff_x19 + 0x420);
          uVar6 = FUN_06d2b5d8(uVar8,0);
          if (lVar10 == 0) goto LAB_06d1fa5c;
          FUN_06d31080(lVar10,uVar6,unaff_w23,0);
          FUN_06d2b770(uVar8,(uint)uVar4 & 1,0);
          uVar9 = FUN_06dbce30(uVar3,0);
          FUN_06d2b7b4(uVar8,uVar9,0);
          FUN_06d2b830(uVar2,uVar8,0);
          unaff_w23 = unaff_w23 + 1;
        }
      }
    }
    param_2 = *(long *)(unaff_x20 + 0x20);
    unaff_w22 = unaff_w22 + 1;
    if (param_2 == 0) goto LAB_06d1fa5c;
    if ((unaff_w21 <= unaff_w23) || (*(int *)(param_2 + 0x18) <= unaff_w22)) {
      if (*(long *)(unaff_x19 + 0x3d8) != 0) {
        FUN_06d33c88(*(long *)(unaff_x19 + 0x3d8),0);
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          FUN_041e3694(&stack0x00000028,*(long *)(unaff_x20 + 0x18),*(undefined8 *)PTR_DAT_072851f8)
          ;
          while( true ) {
            uVar7 = FUN_052d44b4(&stack0x00000028,*unaff_x27);
            if ((uVar7 & 1) == 0) {
              FUN_052d44b0(&stack0x00000028,*(undefined8 *)PTR_DAT_072851e0);
              return;
            }
            if (*(long *)(unaff_x19 + 0x3d8) == 0) break;
            FUN_06d3556c(*(long *)(unaff_x19 + 0x3d8),in_stack_00000038,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
      goto LAB_06d1fa5c;
    }
    param_4 = *unaff_x29;
    param_1 = &stack0x00000008;
  } while( true );
}



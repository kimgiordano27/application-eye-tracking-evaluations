/*
FUNCTION_NAME: UnityEngineInternal.WebRequestUtils$$URLDecode
ENTRY_POINT: 06d1f834
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void UnityEngineInternal_WebRequestUtils__URLDecode(ulong param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x21;
  int iVar14;
  int iVar15;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072851e0);
    thunk_FUN_032e1da0(PTR_DAT_072851e8);
    thunk_FUN_032e1da0(PTR_DAT_072851f0);
    thunk_FUN_032e1da0(PTR_DAT_072851f8);
    thunk_FUN_032e1da0(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__);
    thunk_FUN_032e1da0(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__);
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    *(undefined1 *)(unaff_x21 + 0x941) = 1;
  }
  puVar2 = PTR_DAT_07279c00;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    return;
  }
  if (((*(long *)(param_2 + 0x20) != 0) && (unaff_x19 != 0)) && (*(long *)(unaff_x19 + 0x420) != 0))
  {
    uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0x18);
    uVar6 = FUN_06d2c7b4(*(long *)(unaff_x19 + 0x420),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar2);
    }
    iVar7 = FUN_05924844(uVar1,uVar6,0);
    puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__;
    puVar2 = PTR_DAT_072851e8;
    lVar13 = *(long *)(param_2 + 0x20);
    if (lVar13 != 0) {
      iVar15 = 0;
      iVar14 = 0;
      while ((iVar15 < iVar7 && (iVar14 < *(int *)(lVar13 + 0x18)))) {
        Unity_Collections_NativeArray<ulong>__Copy
                  (&stack0x00000008,lVar13,iVar14,*(undefined8 *)puVar3);
        uVar5 = in_stack_00000020;
        uVar6 = uStack000000000000001c;
        uVar1 = uStack0000000000000018;
        uVar12 = in_stack_00000010;
        iVar4 = in_stack_00000008;
        uVar10 = FUN_057ab1f0(in_stack_00000010,0);
        lVar13 = *(long *)(unaff_x19 + 0x420);
        if (lVar13 == 0) goto LAB_06d1fa5c;
        if ((uVar10 & 1) == 0) {
          uVar10 = FUN_06d307e8(lVar13,uVar12,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x420) != 0) {
              uVar11 = FUN_06d30d58(*(long *)(unaff_x19 + 0x420),uVar12,0);
              uVar10 = uVar11;
              goto joined_r0x06d1f9e0;
            }
            goto LAB_06d1fa5c;
          }
        }
        else {
          iVar8 = FUN_06d2c7b4(lVar13,0);
          if (iVar4 <= iVar8 + -1) {
            if ((*(long *)(unaff_x19 + 0x420) == 0) ||
               (uVar11 = FUN_06d2c628(*(long *)(unaff_x19 + 0x420),iVar4,0), uVar11 == 0))
            goto LAB_06d1fa5c;
            uVar10 = FUN_057ab1f0(*(undefined8 *)(uVar11 + 0x10),0);
            uVar10 = uVar10 & 1;
joined_r0x06d1f9e0:
            if (uVar10 != 0) {
              lVar13 = *(long *)(unaff_x19 + 0x420);
              uVar9 = FUN_06d2b5d8(uVar11,0);
              if (lVar13 == 0) goto LAB_06d1fa5c;
              FUN_06d31080(lVar13,uVar9,iVar15,0);
              FUN_06d2b770(uVar11,(uint)uVar5 & 1,0);
              uVar12 = FUN_06dbce30(uVar6,0);
              FUN_06d2b7b4(uVar11,uVar12,0);
              FUN_06d2b830(uVar1,uVar11,0);
              iVar15 = iVar15 + 1;
            }
          }
        }
        lVar13 = *(long *)(param_2 + 0x20);
        iVar14 = iVar14 + 1;
        if (lVar13 == 0) goto LAB_06d1fa5c;
      }
      if (*(long *)(unaff_x19 + 0x3d8) != 0) {
        FUN_06d33c88(*(long *)(unaff_x19 + 0x3d8),0);
        if (*(long *)(param_2 + 0x18) != 0) {
          FUN_041e3694(&stack0x00000028,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_072851f8);
          while( true ) {
            uVar10 = FUN_052d44b4(&stack0x00000028,*(undefined8 *)puVar2);
            if ((uVar10 & 1) == 0) {
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
    }
  }
LAB_06d1fa5c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



/*
FUNCTION_NAME: Unity.Properties.Internal.ReflectedPropertyBagProvider.<GetPropertyMembers>d__22$$System.IDisposable.Dispose
ENTRY_POINT: 05e5c280
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05e5c328) */

void Unity_Properties_Internal_ReflectedPropertyBagProvider_<GetPropertyMembers>d__22__System_IDisposable_Dispose
               (undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x21;
  long lVar11;
  long *unaff_x25;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_2 != 1) {
    if (unaff_x21 != (long *)0x0) {
      lVar11 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x05e5c318;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c();
code_r0x05e5c318:
      (*(code *)*puVar5)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4(param_1);
  }
  plVar8 = (long *)__cxa_begin_catch();
  lVar11 = *plVar8;
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar9 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05e5c028;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_05e5c028:
    (*(code *)*puVar5)();
  }
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(lVar11);
  }
  lVar11 = thunk_FUN_02cea894(*(undefined8 *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo
                             );
  FUN_04678954(lVar11,*(undefined8 *)Oculus_Platform_Request<AssetDetailsList>_TypeInfo);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_05e613f0();
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (in_stack_00000000 != 0) {
    if (0 < *(int *)(in_stack_00000000 + 0x18)) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05e61078(in_stack_00000000,1);
      FUN_05e613f0(in_stack_00000000,lVar11);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05e62018();
    if (lVar11 != 0) {
      FUN_046796b0(&stack0x00000008,lVar11,
                   *(undefined8 *)Oculus_Platform_Request<AssetDetails>_TypeInfo);
      puVar3 = Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo;
      puVar2 = Oculus_Platform_Request<BlockedUserList>_TypeInfo;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      while (uVar6 = FUN_048a9bcc(&stack0x00000030,*(undefined8 *)puVar2),
            lVar11 = in_stack_00000048, uVar4 = in_stack_00000040, (uVar6 & 1) != 0) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar7 = FUN_03ada604(in_stack_00000048,*(undefined8 *)puVar3);
        uVar1 = *(undefined4 *)(lVar11 + 0x18);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = FUN_05e62140(uVar4,uVar7,uVar1);
        if ((uVar6 & 1) == 0) {
          FUN_05e604ec();
        }
      }
      FUN_048a9ce0(&stack0x00000030,
                   *(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_05e62280();
      if ((uVar6 & 1) != 0) {
        return;
      }
      FUN_05e604ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}



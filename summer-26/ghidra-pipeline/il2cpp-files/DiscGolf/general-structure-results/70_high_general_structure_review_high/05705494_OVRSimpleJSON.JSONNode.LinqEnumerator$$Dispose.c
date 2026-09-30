/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode.LinqEnumerator$$Dispose
ENTRY_POINT: 05705494
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x057059e4) */
/* WARNING: Removing unreachable block (ram,0x057059ec) */
/* WARNING: Removing unreachable block (ram,0x057059f4) */

void OVRSimpleJSON_JSONNode_LinqEnumerator__Dispose(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x19;
  long *unaff_x21;
  int iVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000110;
  undefined1 *in_stack_00000118;
  long in_stack_00000120;
  undefined1 *in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  int in_stack_00000148;
  int in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined4 in_stack_00000304;
  
  uVar10 = FUN_043533f0(&stack0x000002f0);
  in_stack_00000040 = 0;
  FUN_063612a0(&stack0x00000040,uVar10,0xffffffff,0);
  uVar13 = in_stack_00000040;
  puVar8 = Unity_Services_Lobbies_Http_ApiTelemetryScopeFactory_TypeInfo;
  puVar7 = UnityEngine_XR_ARCore_Api_TypeInfo;
  puVar3 = PTR_DAT_06a0d0b0;
  bVar1 = *(byte *)(*(long *)UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo + 0x130);
  in_stack_00000128 = &stack0x000002e8;
  in_stack_00000120 = 0;
  if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo)) {
    in_stack_00000198 = FUN_03762404();
    FUN_043423cc(&stack0x00000040,&stack0x00000198,
                 *(undefined8 *)Unity_Services_Authentication_Shared_ApiRequestPathBuilder_TypeInfo)
    ;
    puVar6 = Newtonsoft_Json_Utilities_AotHelper_TypeInfo;
    puVar5 = UnityEngine_AnimatorControllerParameter_TypeInfo;
    puVar4 = UnityEngine_AnimationState_TypeInfo;
    memcpy(&stack0x000001a0,&stack0x00000040,0xb0);
    in_stack_00000110 = 0;
    in_stack_00000118 = &stack0x000001a0;
    while (uVar11 = FUN_051281ec(&stack0x000001a0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
      FUN_05128504(&stack0x00000040,&stack0x000001a0,*(undefined8 *)puVar6);
      FUN_03e54ae0(&stack0x00000270,&stack0x00000258,&stack0x00000250,*(undefined8 *)puVar7);
      in_stack_00000040 = in_stack_00000258;
      in_stack_00000048 = in_stack_00000260;
      in_stack_00000050 = in_stack_00000268;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000030 = in_stack_00000050;
      uVar12 = FUN_05705bd8(&stack0x00000020);
      FUN_043539ac(&stack0x000002f0,uVar12,*(undefined8 *)puVar8);
      FUN_06361504(&stack0x000002e8,in_stack_00000250,0);
    }
    FUN_0511a86c(&stack0x000001a0,*(undefined8 *)puVar4);
  }
  else {
    FUN_04e4bea0(&stack0x00000040);
    puVar4 = UnityEngine_Animations_AnimatorControllerPlayable_TypeInfo;
    in_stack_00000118 = &stack0x00000290;
    in_stack_00000110 = 0;
    while (uVar11 = FUN_05226bcc(&stack0x00000290,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
      FUN_03e54ae0(&stack0x00000270,&stack0x00000258,&stack0x00000250,*(undefined8 *)puVar7);
      in_stack_00000040 = in_stack_00000258;
      in_stack_00000048 = in_stack_00000260;
      in_stack_00000050 = in_stack_00000268;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_000000f8 = in_stack_00000048;
      in_stack_000000f0 = in_stack_00000040;
      in_stack_00000100 = in_stack_00000050;
      uVar12 = FUN_05705bd8(&stack0x000000f0);
      FUN_043539ac(&stack0x000002f0,uVar12,*(undefined8 *)puVar8);
      FUN_06361504(&stack0x000002e8,in_stack_00000250,0);
    }
    FUN_05226d10(&stack0x00000290,
                 *(undefined8 *)UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_0429d848(&stack0x00000040,in_stack_00000304,3,1,
               *(undefined8 *)UnityEngine_UIElements_Angle_TypeInfo);
  in_stack_00000118 = &stack0x000002d0;
  in_stack_00000110 = 0;
  auVar17 = FUN_04353798(&stack0x000002f0,
                         *(undefined8 *)Unity_Services_Authentication_Shared_ApiUtils_TypeInfo);
  in_stack_00000188 = 0;
  in_stack_00000190 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  _in_stack_00000188 = FUN_05704ca4(auVar17._0_8_,auVar17._8_8_,uVar13);
  FUN_062fcf5c(&stack0x00000188,0);
  if (unaff_x19 != 0) {
    uVar13 = *(undefined8 *)Unity_Services_Authentication_Shared_ApiRequestOptions_TypeInfo;
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    FUN_0429def8(&stack0x00000040,&stack0x000002d0,uVar13);
    puVar3 = UnityEngine_AnimatorStateInfo_TypeInfo;
    memcpy(&stack0x00000140,&stack0x00000040,0x48);
    iVar16 = in_stack_00000150 + 1;
    lVar14 = *(long *)puVar3;
    in_stack_00000150 = iVar16;
    if (iVar16 < in_stack_00000148) {
      do {
        lVar9 = in_stack_00000140;
        in_stack_00000150 = iVar16;
        if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar15 = (undefined8 *)(lVar9 + (long)iVar16 * 0x30);
        in_stack_00000170 = puVar15[3];
        in_stack_00000168 = puVar15[2];
        in_stack_00000180 = puVar15[5];
        in_stack_00000178 = puVar15[4];
        in_stack_00000160 = puVar15[1];
        in_stack_00000158 = *puVar15;
        lVar14 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar2 * 0x30;
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar14 + 0x38) = in_stack_00000170;
          *(undefined8 *)(lVar14 + 0x30) = in_stack_00000168;
          *(undefined8 *)(lVar14 + 0x48) = in_stack_00000180;
          *(undefined8 *)(lVar14 + 0x40) = in_stack_00000178;
          *(undefined8 *)(lVar14 + 0x28) = in_stack_00000160;
          *(undefined8 *)(lVar14 + 0x20) = in_stack_00000158;
        }
        else {
          in_stack_00000040 = in_stack_00000158;
          in_stack_00000048 = in_stack_00000160;
          in_stack_00000050 = in_stack_00000168;
          in_stack_00000058 = in_stack_00000170;
          in_stack_00000060 = in_stack_00000178;
          in_stack_00000068 = in_stack_00000180;
          FUN_0414039c();
        }
        iVar16 = in_stack_00000150 + 1;
        lVar14 = *(long *)puVar3;
        in_stack_00000150 = iVar16;
      } while (iVar16 < in_stack_00000148);
    }
    in_stack_00000180 = 0;
    in_stack_00000178 = 0;
    in_stack_00000170 = 0;
    in_stack_00000168 = 0;
    in_stack_00000160 = 0;
    in_stack_00000158 = 0;
    FUN_051913a0(&stack0x00000140,*(undefined8 *)UnityEngine_UI_AnimationTriggers_TypeInfo);
  }
  FUN_0429db78(in_stack_00000118,
               *(undefined8 *)Unity_Services_Authentication_Shared_ApiException_TypeInfo);
  if (in_stack_00000110 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  FUN_0636136c(in_stack_00000128,0);
  lVar14 = in_stack_00000130;
  if (in_stack_00000120 == 0) {
    FUN_04354108(in_stack_00000138,*(undefined8 *)System_AppContext_TypeInfo);
    if (lVar14 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}



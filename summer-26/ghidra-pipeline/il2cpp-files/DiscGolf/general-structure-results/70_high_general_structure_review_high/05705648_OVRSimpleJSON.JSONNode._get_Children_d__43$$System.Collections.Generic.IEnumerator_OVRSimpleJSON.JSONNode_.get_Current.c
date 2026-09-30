/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode.<get_Children>d__43$$System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current
ENTRY_POINT: 05705648
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x057059ec) */
/* WARNING: Removing unreachable block (ram,0x057059e4) */

void OVRSimpleJSON_JSONNode_<get_Children>d__43__System_Collections_Generic_IEnumerator<OVRSimpleJSON_JSONNode>_get_Current
               (void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int iVar7;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar8;
  undefined8 *unaff_x28;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000110;
  undefined1 *in_stack_00000118;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
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
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000268;
  undefined8 in_stack_000002e8;
  undefined4 in_stack_00000304;
  
  puVar8 = *(undefined8 **)(unaff_x27 + 0x68);
  memcpy(&stack0x000001a0,&stack0x00000040,0xb0);
  in_stack_00000110 = 0;
  in_stack_00000118 = &stack0x000001a0;
  while (uVar4 = FUN_051281ec(&stack0x000001a0,*unaff_x22), (uVar4 & 1) != 0) {
    FUN_05128504(&stack0x00000040,&stack0x000001a0,*unaff_x28);
    FUN_03e54ae0(&stack0x00000270,&stack0x00000258,&stack0x00000250,*unaff_x24);
    in_stack_00000048 = unaff_x26[1];
    in_stack_00000040 = *unaff_x26;
    in_stack_00000050 = in_stack_00000268;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000030 = in_stack_00000050;
    uVar5 = FUN_05705bd8(&stack0x00000020);
    FUN_043539ac(&stack0x000002f0,uVar5,*unaff_x25);
    FUN_06361504(&stack0x000002e8,in_stack_00000250,0);
  }
  FUN_0511a86c(&stack0x000001a0,*puVar8);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_0429d848(&stack0x00000040,in_stack_00000304,3,1,
               *(undefined8 *)UnityEngine_UIElements_Angle_TypeInfo);
  in_stack_00000118 = &stack0x000002d0;
  in_stack_00000110 = 0;
  auVar9 = FUN_04353798(&stack0x000002f0,
                        *(undefined8 *)Unity_Services_Authentication_Shared_ApiUtils_TypeInfo);
  in_stack_00000188 = 0;
  in_stack_00000190 = 0;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  _in_stack_00000188 = FUN_05704ca4(auVar9._0_8_,auVar9._8_8_,in_stack_000002e8);
  FUN_062fcf5c(&stack0x00000188,0);
  if (unaff_x19 != 0) {
    uVar5 = *(undefined8 *)Unity_Services_Authentication_Shared_ApiRequestOptions_TypeInfo;
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    FUN_0429def8(&stack0x00000040,&stack0x000002d0,uVar5);
    puVar2 = UnityEngine_AnimatorStateInfo_TypeInfo;
    memcpy(&stack0x00000140,&stack0x00000040,0x48);
    iVar7 = in_stack_00000150 + 1;
    lVar6 = *(long *)puVar2;
    in_stack_00000150 = iVar7;
    if (iVar7 < in_stack_00000148) {
      do {
        lVar3 = in_stack_00000140;
        in_stack_00000150 = iVar7;
        if ((*(ushort *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar8 = (undefined8 *)(lVar3 + (long)iVar7 * 0x30);
        in_stack_00000170 = puVar8[3];
        in_stack_00000168 = puVar8[2];
        in_stack_00000180 = puVar8[5];
        in_stack_00000178 = puVar8[4];
        in_stack_00000160 = puVar8[1];
        in_stack_00000158 = *puVar8;
        lVar6 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x38) = in_stack_00000170;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000168;
          *(undefined8 *)(lVar6 + 0x48) = in_stack_00000180;
          *(undefined8 *)(lVar6 + 0x40) = in_stack_00000178;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000160;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000158;
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
        iVar7 = in_stack_00000150 + 1;
        lVar6 = *(long *)puVar2;
        in_stack_00000150 = iVar7;
      } while (iVar7 < in_stack_00000148);
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
  lVar6 = in_stack_00000130;
  if (in_stack_00000120 == 0) {
    FUN_04354108(in_stack_00000138,*(undefined8 *)System_AppContext_TypeInfo);
    if (lVar6 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}



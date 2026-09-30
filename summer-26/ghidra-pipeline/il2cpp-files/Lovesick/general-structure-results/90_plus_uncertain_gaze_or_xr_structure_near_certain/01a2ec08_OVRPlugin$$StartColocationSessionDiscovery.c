/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 01a2ec08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar15;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001b8;
  ulong uVar14;
  
  lVar8 = *(long *)(unaff_x19 + 0x68);
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01952b68(uVar9,uVar11,lVar8 + 0x38,0);
    lVar8 = *(long *)(unaff_x19 + 0x68);
    if (lVar8 != 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x38);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01a2a778(uVar9,lVar8 + 0x48,0);
      if (*(char *)(unaff_x19 + 0x50) == '\0') {
        lVar8 = *(long *)(unaff_x19 + 0x68);
        FUN_019aa6e4(&stack0x000000b0,*(undefined8 *)(unaff_x19 + 0x48),0,0);
        in_stack_000000d8 = in_stack_000000b8;
        in_stack_000000d0 = in_stack_000000b0;
        *(undefined8 *)(unaff_x24 + 0x54) = *(undefined8 *)(unaff_x24 + 0x34);
        *(undefined8 *)(unaff_x24 + 0x4c) = *(undefined8 *)(unaff_x24 + 0x2c);
        if (lVar8 == 0) goto LAB_01a2efa0;
        uVar9 = *(undefined8 *)(unaff_x24 + 0x4c);
        *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(unaff_x24 + 0x54);
        *(undefined8 *)(lVar8 + 0x20) = uVar9;
        *(undefined8 *)(lVar8 + 0x1c) = in_stack_000000b8;
        *(undefined8 *)(lVar8 + 0x14) = in_stack_000000b0;
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01a2efa0;
        lVar8 = *(long *)(unaff_x19 + 0x68);
        uVar11 = FUN_026a125c(*(long *)(unaff_x19 + 0x48),0);
      }
      else {
        FUN_019aa6e4(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x48),1,0);
        _uStack00000000000001b4 = *(ulong *)(unaff_x24 + 0x54);
        uStack00000000000001a8 = (undefined4)in_stack_000000d8;
        in_stack_000001a0 = in_stack_000000d0;
        uStack00000000000001ac = (undefined4)*(undefined8 *)(unaff_x24 + 0x4c);
        uStack00000000000001b0 = (undefined4)((ulong)*(undefined8 *)(unaff_x24 + 0x4c) >> 0x20);
        lVar8 = FUN_01a2e660();
        if (lVar8 == 0) goto LAB_01a2efa0;
        lVar7 = *unaff_x26;
        iVar2 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *unaff_x26;
        }
        uVar12 = uStack00000000000001b0;
        uVar11 = uStack00000000000001ac;
        puVar3 = Method_System_Linq_Enumerable_First<MemberInfo>__;
        bVar6 = iVar2 != 0;
        lVar8 = 0x138;
        if (bVar6) {
          lVar8 = 0x16c;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + lVar8);
        in_stack_00000168 = puVar1[1];
        in_stack_00000160 = *puVar1;
        in_stack_00000178 = puVar1[3];
        in_stack_00000170 = puVar1[2];
        in_stack_00000188 = puVar1[5];
        in_stack_00000180 = puVar1[4];
        in_stack_00000190 = *(undefined4 *)(puVar1 + 6);
        lVar8 = 0xd0;
        if (bVar6) {
          lVar8 = 0x104;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + lVar8);
        in_stack_00000128 = puVar1[1];
        in_stack_00000120 = *puVar1;
        in_stack_00000138 = puVar1[3];
        in_stack_00000130 = puVar1[2];
        in_stack_00000150 = *(undefined4 *)(puVar1 + 6);
        in_stack_00000148 = puVar1[5];
        in_stack_00000140 = puVar1[4];
        uVar10 = uStack00000000000001b8;
        uVar14 = _uStack00000000000001b4 & 0xffffffff;
        uVar13 = (undefined4)_uStack00000000000001b4;
        if (DAT_03775377 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03775377 = '\x01';
        }
        puVar4 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar8 = *(long *)(*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0xb8);
        uStack00000000000000f4 = uVar12;
        uStack00000000000000f0 =
             FUN_02699088(uVar11,uVar12,uVar14,uVar10,*(undefined4 *)(lVar8 + 0x48),
                          *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50),0);
        in_stack_000000f8 = uVar13;
        uVar11 = uStack00000000000000f4;
        uVar12 = in_stack_000000f8;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
        uVar13 = uStack00000000000001b0;
        uVar10 = uStack00000000000001ac;
        uVar5 = uStack00000000000001b8;
        uVar14 = _uStack00000000000001b4 & 0xffffffff;
        uVar15 = (undefined4)_uStack00000000000001b4;
        if (DAT_037750c4 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037750c4 = '\x01';
        }
        lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
        uStack00000000000000f0 =
             FUN_02699088(uVar10,uVar13,uVar14,uVar5,*(undefined4 *)(lVar8 + 0x18),
                          *(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),0);
        in_stack_000000f8 = uVar15;
        uStack00000000000000f4 = uVar13;
        uVar10 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
        uStack00000000000001ac = FUN_02698e08(uVar9,0);
        uStack00000000000001b0 = uVar11;
        uStack00000000000001b8 = uVar10;
        uStack00000000000001b4 = uVar12;
        in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x38);
        in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x30);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x3c);
        *(undefined8 *)(unaff_x24 + 0x84) = *(undefined8 *)(unaff_x20 + 0x44);
        *(undefined8 *)(unaff_x24 + 0x7c) = uVar9;
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_01a2efa0;
        FUN_019a7844(&stack0x00000100,&stack0x000001a0,*(long *)(unaff_x19 + 0x68) + 0x14,0);
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01a2efa0;
        lVar8 = *(long *)(unaff_x19 + 0x68);
        uVar11 = FUN_0269fcf8(*(long *)(unaff_x19 + 0x48),0);
      }
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x70) = uVar11;
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x30) = 2;
          return;
        }
      }
    }
  }
LAB_01a2efa0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



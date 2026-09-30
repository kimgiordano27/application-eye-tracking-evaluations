/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 077371f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar9;
  long unaff_x28;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000f8;
  
  plVar3 = (long *)FUN_07715da0();
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
                    /* try { // try from 07737208 to 0783722b has its CatchHandler @ 07737320 */
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x26) * 0x10 + 0x138);
          goto LAB_07737254;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f30ab8,0x26);
LAB_07737254:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_09f31928;
    puVar1 = PTR_DAT_09f31908;
    if (((uVar7 & 1) != 0) && (0 < (int)*(ulong *)(unaff_x23 + 0x18))) {
      uVar7 = 0;
      uVar6 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
      puVar4 = (undefined8 *)((ulong)&stack0x000000b0 | 8);
      do {
        if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*unaff_x22 == 0) goto LAB_07737514;
        uVar9 = *(undefined8 *)(unaff_x23 + 0x20 + uVar7 * 8);
        FUN_05b4c354(&stack0x00000100,*unaff_x22,uVar7 & 0xffffffff,*(undefined8 *)puVar2);
        in_stack_00000078 = *(undefined8 *)(unaff_x28 + 0x58);
        in_stack_00000070 = *(undefined8 *)(unaff_x28 + 0x50);
        in_stack_00000088 = *(undefined8 *)(unaff_x28 + 0x68);
        in_stack_00000080 = *(undefined8 *)(unaff_x28 + 0x60);
        in_stack_00000098 = *(undefined8 *)(unaff_x28 + 0x78);
        in_stack_00000090 = *(undefined8 *)(unaff_x28 + 0x70);
        in_stack_000000a8 = *(undefined8 *)(unaff_x28 + 0x88);
        in_stack_000000a0 = *(undefined8 *)(unaff_x28 + 0x80);
        in_stack_000000b0 = uVar9;
        thunk_FUN_044bb4b4(&stack0x000000b0,uVar9);
        puVar4[5] = in_stack_00000098;
        puVar4[4] = in_stack_00000090;
        puVar4[7] = in_stack_000000a8;
        puVar4[6] = in_stack_000000a0;
        puVar4[1] = in_stack_00000078;
        *puVar4 = in_stack_00000070;
        puVar4[3] = in_stack_00000088;
        puVar4[2] = in_stack_00000080;
        lVar5 = *(long *)(in_stack_00000020 + 0x20);
        memcpy(&stack0x00000028,&stack0x000000b0,0x48);
        if (lVar5 == 0) goto LAB_07737514;
        uVar9 = *(undefined8 *)puVar1;
        memcpy(&stack0x00000100,&stack0x00000028,0x48);
        FUN_05693964(lVar5,&stack0x00000100,uVar9);
        uVar6 = (ulong)*(uint *)(unaff_x23 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x23 + 0x18));
    }
    if (*(int *)(in_stack_00000020 + 0x10) < 5) {
LAB_077374f0:
      return unaff_w21 & 1;
    }
    plVar3 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
    FUN_078c1634(plVar3,0);
    uVar9 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319c8,*(undefined8 *)(in_stack_00000018 + 0x20),0
                        );
    if (plVar3 != (long *)0x0) {
      FUN_078c335c(plVar3,uVar9,0);
      if (*unaff_x22 != 0) {
        in_stack_000000f8 = *(undefined4 *)(*unaff_x22 + 0x18);
        uVar9 = FUN_07a3b850(&stack0x000000f8,0);
        uVar9 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319a8,uVar9,0);
        FUN_078c335c(plVar3,uVar9,0);
        if (*in_stack_00000010 != 0) {
          in_stack_000000f8 = (undefined4)*(undefined8 *)(*in_stack_00000010 + 0x18);
          uVar9 = FUN_07a3b850(&stack0x000000f8,0);
          uVar9 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319b0,uVar9,0);
          FUN_078c335c(plVar3,uVar9,0);
          if (*in_stack_00000008 != 0) {
            in_stack_000000f8 = (undefined4)*(undefined8 *)(*in_stack_00000008 + 0x18);
            uVar9 = FUN_07a3b850(&stack0x000000f8,0);
            uVar9 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319c0,uVar9,0);
            FUN_078c335c(plVar3,uVar9,0);
            in_stack_000000f8 = *(undefined4 *)(in_stack_00000018 + 0x120);
            uVar9 = FUN_07a3b850(&stack0x000000f8,0);
            uVar9 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319d0,uVar9,0);
            FUN_078c335c(plVar3,uVar9,0);
            uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar9,0);
            goto LAB_077374f0;
          }
        }
      }
    }
  }
LAB_07737514:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



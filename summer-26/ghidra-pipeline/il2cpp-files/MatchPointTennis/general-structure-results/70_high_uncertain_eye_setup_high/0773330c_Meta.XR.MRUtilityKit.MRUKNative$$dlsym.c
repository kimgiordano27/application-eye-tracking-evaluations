/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlsym
ENTRY_POINT: 0773330c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNative__dlsym(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar11;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000d0;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x22 + 0x1e4) = 1;
  in_stack_000000d0 = 0;
  unaff_x21[5] = 0;
  unaff_x21[4] = 0;
  unaff_x21[7] = 0;
  unaff_x21[6] = 0;
  unaff_x21[1] = 0;
  *unaff_x21 = 0;
  unaff_x21[3] = 0;
  unaff_x21[2] = 0;
  *(undefined1 *)(unaff_x19 + 0x6d) = 0;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (plVar4 = (long *)FUN_07715da0(*(long *)(unaff_x19 + 0x10),0), plVar4 != (long *)0x0)) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x24) * 0x10 + 0x138);
          goto LAB_0773339c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773339c:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar3 != 1) {
      return;
    }
    if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
      uVar6 = FUN_077334d0();
      *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
      thunk_FUN_044bb4b4();
    }
    puVar2 = PTR_DAT_09f31890;
    lVar7 = *(long *)(unaff_x19 + 0x38);
    if (lVar7 != 0) {
      uVar8 = 0;
      lVar11 = 0x20;
      puVar5 = (undefined8 *)((ulong)&stack0x00000090 | 8);
      do {
        if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar8) {
          *(undefined1 *)(unaff_x19 + 0x6d) = 1;
          return;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_077334cc:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar9 = *(long *)(unaff_x19 + 0x40);
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_077334cc;
        puVar1 = (undefined8 *)(lVar9 + lVar11);
        in_stack_00000078 = puVar1[5];
        in_stack_00000070 = puVar1[4];
        in_stack_00000088 = puVar1[7];
        in_stack_00000080 = puVar1[6];
        in_stack_00000058 = puVar1[1];
        in_stack_00000050 = *puVar1;
        in_stack_00000068 = puVar1[3];
        in_stack_00000060 = puVar1[2];
        in_stack_00000090 = *(undefined8 *)(lVar7 + uVar8 * 8 + 0x20);
        thunk_FUN_044bb4b4(&stack0x00000090);
        puVar5[5] = in_stack_00000078;
        puVar5[4] = in_stack_00000070;
        puVar5[7] = in_stack_00000088;
        puVar5[6] = in_stack_00000080;
        puVar5[1] = in_stack_00000058;
        *puVar5 = in_stack_00000050;
        puVar5[3] = in_stack_00000068;
        puVar5[2] = in_stack_00000060;
        lVar7 = *(long *)(unaff_x19 + 0x30);
        memcpy(&stack0x00000008,&stack0x00000090,0x48);
        if (lVar7 == 0) break;
        uVar6 = *(undefined8 *)puVar2;
        memcpy(&stack0x000000d8,&stack0x00000008,0x48);
        FUN_0753b6b4(lVar7,&stack0x000000d8,uVar8 & 0xffffffff,uVar6);
        lVar7 = *(long *)(unaff_x19 + 0x38);
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x40;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



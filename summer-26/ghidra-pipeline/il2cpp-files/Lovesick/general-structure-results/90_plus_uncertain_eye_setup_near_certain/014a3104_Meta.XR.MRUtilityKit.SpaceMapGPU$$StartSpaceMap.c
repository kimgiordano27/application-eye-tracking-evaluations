/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMap
ENTRY_POINT: 014a3104
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMap(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int in_w9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long lVar6;
  long lVar7;
  float fVar8;
  int iVar9;
  undefined1 in_stack_00000008;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  
  iVar9 = *(int *)(param_1 + 0x14);
  if (in_w9 == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xe60) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar8 = (float)iVar9 * DAT_028aa028;
  iVar9 = -0x80000000;
  if ((float)(int)fVar8 != INFINITY) {
    iVar9 = (int)fVar8;
  }
  uVar3 = FUN_00da4fb8(*(undefined8 *)Method_System_Collections_Generic_HashSet<RTHandle>_Contains__
                       ,iVar9);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
  while( true ) {
    puVar1 = System_SystemException_TypeInfo;
    lVar6 = *(long *)(unaff_x19 + 10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar9 = unaff_x19[0xc];
    iVar5 = *(int *)(lVar6 + 0x18);
    if (iVar5 <= iVar9) {
      if (unaff_x20 != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x80);
        *(undefined1 *)(unaff_x20 + 0x29) = 0;
        if (*(char *)(unaff_x20 + 0x28) == '\0') {
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
          }
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
        }
        else {
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
          }
          FUN_014a2798();
        }
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_016a2130(unaff_x19 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *(long *)(unaff_x20 + 0x88);
    if (lVar7 == 0) break;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      iVar5 = *(int *)(lVar6 + 0x18);
    }
    iVar9 = FUN_017726a0(*(undefined4 *)(lVar7 + 0x18),iVar5 - iVar9,0);
    FUN_01795470(*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],*(undefined8 *)(unaff_x20 + 0x88),0,
                 iVar9,0);
    lVar6 = *(long *)(unaff_x20 + 0x78);
    if (lVar6 != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack0000000000000018 = 0xff7fffff;
      iStack000000000000001c = iVar9;
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),(long)&stack0x00000018 + 4,
                 *(undefined8 *)(unaff_x20 + 0x88),&stack0x00000018,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    unaff_x19[0xc] = unaff_x19[0xc] + iVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017ee208(0);
    in_stack_00000008 = FUN_016a2efc();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_016a2f04(&stack0x00000008,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 0xd) = in_stack_00000008;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2,&stack0x00000008);
      return;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a32c8(&stack0x00000008,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



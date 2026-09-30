/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMap
ENTRY_POINT: 014a3064
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMap(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined1 in_stack_00000008;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  
  thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
  thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__);
  thunk_FUN_00d48444(
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
                    );
  *(undefined1 *)(unaff_x20 + 0xcbd) = 1;
  puVar4 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
  in_stack_00000008 = 0;
  lVar9 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = (undefined1)unaff_x19[0xd];
    *(undefined1 *)(unaff_x19 + 0xd) = 0;
    *unaff_x19 = -1;
    goto LAB_014a3294;
  }
  unaff_x19[0xc] = 0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(lVar9 + 0x88) == 0) {
    if (*(long *)(lVar9 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar5 = *(int *)(*(long *)(lVar9 + 0x90) + 0x14);
    if (DAT_03775e60 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775e60 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar12 = (float)iVar5 * DAT_028aa028;
    iVar5 = -0x80000000;
    if ((float)(int)fVar12 != INFINITY) {
      iVar5 = (int)fVar12;
    }
    uVar6 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,iVar5);
    *(undefined8 *)(lVar9 + 0x88) = uVar6;
  }
  while( true ) {
    puVar1 = System_SystemException_TypeInfo;
    lVar10 = *(long *)(unaff_x19 + 10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar5 = unaff_x19[0xc];
    iVar8 = *(int *)(lVar10 + 0x18);
    if (iVar8 <= iVar5) {
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x80);
        *(undefined1 *)(lVar9 + 0x29) = 0;
        if (*(char *)(lVar9 + 0x28) == '\0') {
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
          }
          *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
        }
        else {
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
          }
          FUN_014a2798(lVar9);
        }
        *unaff_x19 = -2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_016a2130(unaff_x19 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = *(long *)(lVar9 + 0x88);
    if (lVar11 == 0) break;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      iVar8 = *(int *)(lVar10 + 0x18);
    }
    iVar5 = FUN_017726a0(*(undefined4 *)(lVar11 + 0x18),iVar8 - iVar5,0);
    FUN_01795470(*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],*(undefined8 *)(lVar9 + 0x88),0,
                 iVar5,0);
    lVar10 = *(long *)(lVar9 + 0x78);
    if (lVar10 != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack0000000000000018 = 0xff7fffff;
      iStack000000000000001c = iVar5;
      (**(code **)(lVar10 + 0x18))
                (*(undefined8 *)(lVar10 + 0x40),(long)&stack0x00000018 + 4,
                 *(undefined8 *)(lVar9 + 0x88),&stack0x00000018,*(undefined8 *)(lVar10 + 0x28));
    }
    puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    unaff_x19[0xc] = unaff_x19[0xc] + iVar5;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017ee208(0);
    in_stack_00000008 = FUN_016a2efc();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016a2f04(&stack0x00000008,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 0xd) = in_stack_00000008;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(unaff_x19 + 2,&stack0x00000008);
      return;
    }
LAB_014a3294:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a32c8(&stack0x00000008,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



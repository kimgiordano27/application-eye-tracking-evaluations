/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorRequestCanceled_get
ENTRY_POINT: 05fd4bf0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorRequestCanceled_get(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long unaff_x19;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined **unaff_x22;
  long *plVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000008;
  
  do {
    plVar18 = (long *)unaff_x22[0x2d];
    do {
      while( true ) {
        do {
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          lVar15 = *(long *)(unaff_x19 + 0x18);
          if ((*(ushort *)(*(long *)(*plVar18 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          if (*(int *)(lVar15 + 8) <= in_stack_00000008._4_4_) {
            FUN_05f4a1b4(&stack0x0000004c,0);
            return;
          }
          puVar9 = (undefined4 *)
                   FUN_042c6444(unaff_x19 + 0x18,in_stack_00000008._4_4_,
                                *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
          cVar8 = DAT_06dc4872;
        } while (*(char *)((long)puVar9 + 0x7a) != '\0');
        puVar9[0x1d] = 0xffffffff;
        *(undefined1 *)((long)puVar9 + 0x7e) = 0;
        if (cVar8 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        iVar1 = puVar9[10];
        uVar3 = puVar9[0xb];
        uVar16 = (ulong)uVar3;
        lVar17 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar15 = *(long *)(lVar17 + 0x38);
        if (lVar15 == 0) {
          FUN_02dcfd74(lVar17);
          lVar15 = *(long *)(lVar17 + 0x38);
        }
        lVar15 = FUN_036ee4d8(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(lVar15 + 0x10));
        if ((int)uVar3 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar3 != 0) {
          puVar13 = (undefined4 *)(lVar15 + (long)iVar1 * 0xc + 8);
          do {
            uVar5 = *puVar13;
            uVar21 = *(undefined8 *)(puVar13 + -2);
            lVar15 = FUN_05fdc35c();
            iVar1 = *(int *)(lVar15 + 0x28);
            if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (iVar1 == (int)((ulong)uVar21 >> 0x20)) {
              iVar1 = *(int *)(lVar15 + 4) + -1;
              if (iVar1 == 0) {
                *(undefined4 *)(lVar15 + 8) = *puVar9;
                FUN_05fdca40(puVar9,uVar21);
              }
              *(int *)(lVar15 + 4) = iVar1;
            }
            if (puVar9[0x1d] == -1) {
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              pcVar10 = (char *)FUN_05fdfe80(*(long *)(unaff_x19 + 0x10),uVar21,uVar5,0);
              if ((*pcVar10 != '\0') &&
                 (puVar11 = (undefined4 *)
                            FUN_042c6444(unaff_x19 + 0x18,*(undefined4 *)(pcVar10 + 4),
                                         *(undefined8 *)
                                          Method_Mono_Security_ASN1Convert_ToDateTime__),
                 *(char *)(puVar11 + 0x1e) != *(char *)(puVar9 + 0x1e))) {
                puVar9[0x1d] = *puVar11;
              }
            }
            uVar16 = uVar16 - 1;
            puVar13 = puVar13 + 3;
          } while (uVar16 != 0);
        }
        plVar18 = (long *)Method_Mono_Security_ASN1Convert_ToInt32__;
        if (DAT_06dc4873 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
          DAT_06dc4873 = '\x01';
        }
        iVar1 = puVar9[0xc];
        uVar3 = puVar9[0xd];
        lVar17 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
        ;
        lVar15 = *(long *)(lVar17 + 0x38);
        if (lVar15 == 0) {
          FUN_02dcfd74(lVar17);
          lVar15 = *(long *)(lVar17 + 0x38);
        }
        lVar15 = FUN_036ee4ec(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(lVar15 + 0x10));
        if (-1 < (int)uVar3) break;
        FUN_05508bc8(0);
      }
    } while (uVar3 == 0);
    uVar16 = 0;
    do {
      puVar14 = (undefined8 *)(lVar15 + (long)iVar1 * 0xc + uVar16 * 0xc);
      uVar6 = *(uint *)(puVar14 + 1);
      uVar21 = *puVar14;
      lVar17 = FUN_05fdc35c();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = FUN_05fdfe80(*(long *)(unaff_x19 + 0x10),uVar21,uVar6,0);
      iVar7 = *(int *)(lVar17 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar20 = (int)((ulong)uVar21 >> 0x20);
      if ((iVar7 == iVar20) && (*(int *)(lVar12 + 8) == 0)) {
        *(undefined4 *)(lVar17 + 8) = *puVar9;
        FUN_05fdca40(puVar9,uVar21);
      }
      iVar7 = *(int *)(lVar12 + 8);
      if (0 < iVar7) {
        iVar19 = 0;
        do {
          lVar17 = *(long *)(unaff_x19 + 0x10);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (DAT_06dc486d == '\0') {
            FUN_02d965b8(PTR_DAT_06a0f5d8);
            DAT_06dc486d = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar2 = *(int *)(lVar17 + 0x28);
          iVar4 = *(int *)(lVar17 + 0x2c);
          lVar17 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
          if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (DAT_06dc4288 == '\0') {
            FUN_02d965b8(PTR_DAT_06a0f5d8);
            DAT_06dc4288 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          puVar13 = (undefined4 *)
                    FUN_042c8e28(lVar17 + (long)(int)uVar6 * 8 + 0x20,
                                 iVar19 + (iVar20 + iVar2 * ((uint)uVar21 & 0xffff)) * iVar4,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                );
          lVar17 = FUN_042c6444(unaff_x19 + 0x18,*puVar13,
                                *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
          if (*(char *)(puVar9 + 0x1e) != *(char *)(lVar17 + 0x78)) {
            *(undefined1 *)((long)puVar9 + 0x7e) = 1;
            break;
          }
          iVar19 = iVar19 + 1;
        } while (iVar7 != iVar19);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar3);
    unaff_x22 = &
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TapGesture>__
    ;
  } while( true );
}



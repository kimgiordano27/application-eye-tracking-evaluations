/*
FUNCTION_NAME: FUN_01a2996c
ENTRY_POINT: 01a2996c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

float FUN_01a2996c(undefined8 param_1,int *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar11 = System_Runtime_Serialization_SerializationEventsCache_<>c_TypeInfo;
  if ((DAT_0377ab26 & 1) == 0) {
    thunk_FUN_00d48444(System_Runtime_Serialization_SerializationEventsCache_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
                      );
    DAT_0377ab26 = 1;
  }
  iVar1 = *param_2;
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  iVar7 = param_2[4];
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = 0;
  fVar20 = 0.0;
  fVar19 = 1.0;
  bVar10 = false;
  do {
    if ((param_3 & 1) == 0) {
      if (param_4 == (long *)0x0) goto LAB_01a29d14;
      lVar13 = *param_4;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)
               Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
             ) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01a29a88;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_00d59724(param_4,*(long *)
                                      Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
                             ,0);
LAB_01a29a88:
      uVar14 = (*(code *)*puVar12)(param_4,uVar16,puVar12[1]);
      if ((uVar14 & 1) == 0) goto LAB_01a29a9c;
    }
    else {
LAB_01a29a9c:
      iVar17 = param_2[2];
      iVar5 = param_2[3];
      iVar8 = param_2[4];
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      piVar15 = param_2;
      switch(uVar16) {
      case 1:
        piVar15 = param_2 + 1;
      case 0:
        iVar5 = *piVar15;
        break;
      case 2:
        iVar5 = iVar17;
        break;
      case 3:
        break;
      case 4:
        iVar5 = iVar8;
        break;
      default:
        goto OVRPlugin__StopFaceTracking;
      }
      if (iVar5 == 0) goto OVRPlugin__StopFaceTracking;
      iVar17 = *param_2;
      iVar8 = param_2[1];
      iVar5 = param_2[2];
      iVar6 = param_2[3];
      iVar9 = param_2[4];
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      switch(uVar16) {
      case 0:
        break;
      case 1:
        iVar17 = iVar8;
        break;
      case 2:
        iVar17 = iVar5;
        break;
      case 3:
        iVar17 = iVar6;
        break;
      case 4:
        iVar17 = iVar9;
        break;
      default:
        goto switchD_01a29b1c_default;
      }
      if (iVar17 == 1) {
        if (param_4 == (long *)0x0) goto LAB_01a29d14;
        lVar13 = *param_4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)
                 Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
               ) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_01a29c08;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_00d59724(param_4,*(long *)
                                        Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
                               ,2);
LAB_01a29c08:
        fVar18 = (float)(*(code *)*puVar12)(param_4,uVar16,puVar12[1]);
        if (fVar20 <= fVar18) {
          fVar20 = fVar18;
        }
      }
      else {
switchD_01a29b1c_default:
        iVar17 = *param_2;
        iVar8 = param_2[1];
        iVar5 = param_2[2];
        iVar6 = param_2[3];
        iVar9 = param_2[4];
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        switch(uVar16) {
        case 0:
          break;
        case 1:
          iVar17 = iVar8;
          break;
        case 2:
          iVar17 = iVar5;
          break;
        case 3:
          iVar17 = iVar6;
          break;
        case 4:
          iVar17 = iVar9;
          break;
        default:
          goto OVRPlugin__StopFaceTracking;
        }
        if (iVar17 == 2) {
          if (param_4 == (long *)0x0) {
LAB_01a29d14:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar13 = *param_4;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)
                   Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
                 ) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_01a29c9c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_00d59724(param_4,*(long *)
                                          Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
                                 ,2);
LAB_01a29c9c:
          fVar18 = (float)(*(code *)*puVar12)(param_4,uVar16,puVar12[1]);
          if (fVar18 <= fVar19) {
            fVar19 = fVar18;
          }
          bVar10 = true;
        }
      }
    }
OVRPlugin__StopFaceTracking:
    uVar16 = uVar16 + 1;
    if (uVar16 == 5) {
      if (!bVar10) {
        fVar19 = 0.0;
      }
      if ((((iVar1 != 2 && iVar3 != 2) && iVar2 != 2) && iVar4 != 2) && iVar7 != 2) {
        fVar19 = fVar20;
      }
      return fVar19;
    }
  } while( true );
}



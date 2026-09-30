/*
FUNCTION_NAME: FUN_01ec7210
ENTRY_POINT: 01ec7210
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ec77d0) */

long FUN_01ec7210(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined4 local_68;
  char local_64 [4];
  long local_58;
  
  local_58 = param_2;
  if ((DAT_0377ff97 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Method_System_Net_TimerThread_CreateQueue__);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    DAT_0377ff97 = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  local_64[0] = '\0';
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar16 = thunk_FUN_00d48444(
                               System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo
                               );
    FUN_016ec5b8(uVar8,uVar16,0);
    uVar16 = thunk_FUN_00d48444(StringLiteral_101);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar16);
  }
  plVar15 = *(long **)(param_1 + 0x20);
  local_68 = FUN_01eb81c0(param_2,0);
  uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar9 = (**(code **)(*plVar15 + 0x348))(plVar15,uVar8,*(undefined8 *)(*plVar15 + 0x350));
  if ((uVar9 & 1) == 0) {
    uVar8 = thunk_FUN_00d48444(PTR_DAT_033f4dc0);
    uVar8 = FUN_01f75600(uVar8,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar16 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(
                               System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo
                               );
    FUN_016ec624(uVar16,uVar8,uVar12,0);
    uVar8 = thunk_FUN_00d48444(StringLiteral_101);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar16,uVar8);
  }
  uVar8 = FUN_01ec2e14(param_1);
  local_64[0] = '\0';
  FUN_017d75a8(uVar8,local_64,0);
  FUN_01ec7908(param_1,param_2);
  FUN_01ec83a4(param_1,param_2);
  uVar16 = *(undefined8 *)(param_2 + 0xd0);
  if (*(int *)(*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01fc427c(uVar16,0,0);
  if ((uVar9 & 1) != 0) {
    plVar15 = *(long **)(param_1 + 0x40);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = (**(code **)(*plVar15 + 0x3a8))
                      (plVar15,*(undefined8 *)(param_2 + 0xd0),*(undefined8 *)(*plVar15 + 0x3b0));
  }
  uVar16 = FUN_01ec6810(uVar9,param_2);
  plVar15 = (long *)FUN_01ec89c8(param_1,uVar16);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *plVar15;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_01ec73dc;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_00d59724(plVar15,*(long *)
                                  System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,1
                        );
LAB_01ec73dc:
  iVar6 = (*(code *)*puVar10)(plVar15,puVar10[1]);
  if (iVar6 == 0) {
    plVar15 = *(long **)(param_1 + 0x50);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar15 + 0x3a8))(plVar15,uVar16,*(undefined8 *)(*plVar15 + 0x3b0));
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  if ((*(int *)(param_2 + 0x7c) == 0) &&
     (uVar9 = FUN_01ec8b2c(param_1,&local_58,*(undefined8 *)(param_2 + 0x48)), (uVar9 & 1) != 0)) {
    plVar15 = *(long **)(param_1 + 0x50);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar13 = (**(code **)(*plVar15 + 0x308))(plVar15,uVar16,*(undefined8 *)(*plVar15 + 0x310));
    if (lVar13 == 0) {
      plVar15 = *(long **)(param_1 + 0x50);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar15 + 0x2a8))(plVar15,uVar16,uVar16,*(undefined8 *)(*plVar15 + 0x2b0));
    }
    puVar5 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
    puVar2 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
    if ((*(long *)(param_1 + 0x70) == 0) &&
       (uVar9 = thunk_FUN_015fe514(uVar16,*(undefined8 *)
                                           Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo
                                   ,0), lVar13 = local_58, (uVar9 & 1) != 0)) {
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = FUN_01eb80b0(local_58,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = FUN_01ec1550(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50));
      if (lVar11 != 0) {
        *(long *)(param_1 + 0x70) = lVar13;
      }
    }
    param_2 = local_58;
    puVar4 = Method_System_Net_TimerThread_CreateQueue__;
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar6 = 0;
    while( true ) {
      plVar15 = (long *)FUN_01eb917c(param_2,0);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar7 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
      if (iVar7 <= iVar6) break;
      plVar15 = (long *)FUN_01eb917c(param_2,0);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar15 = (long *)(**(code **)(*plVar15 + 0x2e8))
                                  (plVar15,iVar6,*(undefined8 *)(*plVar15 + 0x2f0));
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if ((*(byte *)(*plVar15 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar15);
      }
      plVar17 = *(long **)(param_1 + 0x20);
      local_68 = FUN_01eb81c0(plVar15,0);
      uVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar16,uVar16);
      }
      uVar9 = (**(code **)(*plVar17 + 0x348))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x350));
      if ((uVar9 & 1) == 0) {
        plVar17 = *(long **)(param_1 + 0x20);
        local_68 = FUN_01eb81c0(plVar15,0);
        uVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar16,uVar16);
        }
        uVar9 = (**(code **)(*plVar17 + 0x288))
                          (plVar17,uVar16,plVar15,*(undefined8 *)(*plVar17 + 0x290));
      }
      uVar16 = FUN_01ec6810(uVar9,plVar15);
      plVar15 = *(long **)(param_1 + 0x50);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = (**(code **)(*plVar15 + 0x308))(plVar15,uVar16,*(undefined8 *)(*plVar15 + 0x310));
      if (lVar13 == 0) {
        plVar15 = *(long **)(param_1 + 0x50);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar15 + 0x2a8))(plVar15,uVar16,uVar16,*(undefined8 *)(*plVar15 + 0x2b0));
      }
      if ((*(long *)(param_1 + 0x70) == 0) &&
         (uVar9 = thunk_FUN_015fe514(uVar16,*(undefined8 *)puVar2,0), (uVar9 & 1) != 0)) {
        lVar13 = FUN_01eb80b0(param_2,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar13 = FUN_01ec1550(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50));
        if (lVar13 != 0) {
          *(long *)(param_1 + 0x70) = param_2;
        }
      }
      iVar6 = iVar6 + 1;
    }
  }
  if (local_64[0] != '\0') {
    thunk_FUN_00d56f10(uVar8,0);
  }
  return param_2;
}



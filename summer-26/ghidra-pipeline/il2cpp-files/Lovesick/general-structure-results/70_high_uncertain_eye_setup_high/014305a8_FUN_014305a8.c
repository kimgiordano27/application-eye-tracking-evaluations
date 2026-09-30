/*
FUNCTION_NAME: FUN_014305a8
ENTRY_POINT: 014305a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014305a8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long local_38;
  
  if ((DAT_037769cd & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_0__);
    thunk_FUN_00d48444(System_Collections_ArrayList_IListWrapper_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13354);
    thunk_FUN_00d48444(StringLiteral_2590);
    DAT_037769cd = 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_2590) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x11) * 0x10 + 0x138);
          goto LAB_01430684;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_2590,0x11);
LAB_01430684:
    (*(code *)*puVar5)(param_2,uVar4,puVar5[1]);
    puVar3 = StringLiteral_13354;
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_0__;
    puVar1 = System_Collections_ArrayList_IListWrapper_TypeInfo;
    lVar7 = param_1[0x13];
    if (lVar7 != 0) {
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar7 + 0x18)) {
        FUN_0132138c(lVar7,iVar11,&local_38,*(undefined8 *)puVar3);
        if ((local_38 == 0) || (plVar6 = *(long **)(local_38 + 0x10), plVar6 == (long *)0x0))
        goto LAB_0143077c;
        (**(code **)(*plVar6 + 0x7c8))(plVar6,*(undefined8 *)(*plVar6 + 2000));
        lVar7 = param_1[0x13];
        iVar11 = iVar11 + 1;
        if (lVar7 == 0) goto LAB_0143077c;
      }
      if (param_1[0x12] != 0) {
        FUN_0129a9f4(param_1[0x12],*(undefined8 *)puVar2);
        lVar7 = param_1[0x13];
        if (lVar7 != 0) {
          lVar9 = *(long *)puVar1;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
          if ((uVar8 & 1) == 0) {
            *(undefined4 *)(lVar7 + 0x18) = 0;
          }
          else {
            iVar11 = *(int *)(lVar7 + 0x18);
            *(undefined4 *)(lVar7 + 0x18) = 0;
            if (0 < iVar11) {
              FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
            }
          }
          return;
        }
      }
    }
  }
LAB_0143077c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



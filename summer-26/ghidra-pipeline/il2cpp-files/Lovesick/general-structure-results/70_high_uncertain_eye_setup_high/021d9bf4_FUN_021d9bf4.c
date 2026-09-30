/*
FUNCTION_NAME: FUN_021d9bf4
ENTRY_POINT: 021d9bf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_021d9bf4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long local_58;
  
  local_58 = 0;
  if (param_2 < 1) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(Method_System_Collections_SortedList_IndexOfKey__);
    uVar8 = thunk_FUN_00d48444(System_Resources_RuntimeResourceSet_var);
    FUN_016ec624(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar7);
  }
  if (*(long *)(param_1 + 0x78) != param_2) {
    lVar2 = param_2;
    if (param_2 <= param_3) {
      lVar2 = param_3;
    }
    lVar4 = FUN_0265ef98(param_2,4,4,0);
    if (lVar4 == 0) {
      return 0;
    }
    if (0 < *(long *)(param_1 + 0x90)) {
      if ((param_2 < *(long *)(param_1 + 0x78)) || (*(char *)(param_1 + 0xb8) != '\0')) {
        local_58 = *(long *)(param_1 + 0xa8);
        iVar12 = 0;
        iVar11 = 0;
        iVar14 = 1;
        lVar13 = *(long *)(param_1 + 0x98);
        lVar10 = lVar4;
        if (local_58 == 0) goto LAB_021d9c98;
        do {
          uVar9 = (uint)*(ushort *)(local_58 + 4);
          while( true ) {
            uVar1 = uVar9;
            if ((uVar9 & 3) != 0) {
              uVar1 = (uVar9 - (uVar9 & 3)) + 4;
            }
            if (lVar13 <= param_2) {
              FUN_0265efec(lVar10,local_58,uVar9,0);
              uVar3 = *(ushort *)(lVar10 + 4);
              iVar11 = uVar1 + iVar11;
              iVar12 = iVar12 + 1;
              uVar9 = (uint)uVar3;
              if ((uVar3 & 3) != 0) {
                uVar9 = ((uint)uVar3 - (uVar3 & 3)) + 4;
              }
              lVar10 = (ulong)uVar9 + lVar10;
            }
            uVar5 = FUN_021d9dfc(param_1,&local_58);
            if (((uVar5 & 1) == 0) || (*(long *)(param_1 + 0x90) <= (long)iVar14)) {
              *(undefined1 *)(param_1 + 0xb8) = 0;
              *(long *)(param_1 + 0x90) = (long)iVar12;
              *(long *)(param_1 + 0x98) = (long)iVar11;
              goto LAB_021d9d28;
            }
            lVar13 = lVar13 - (ulong)uVar1;
            iVar14 = iVar14 + 1;
            if (local_58 != 0) break;
LAB_021d9c98:
            uVar9 = 0;
          }
        } while( true );
      }
      FUN_0265efec(lVar4,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),0);
    }
LAB_021d9d28:
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_0265eb58(*(long *)(param_1 + 0xa0),4,0);
    }
    *(long *)(param_1 + 0xa0) = lVar4;
    *(long *)(param_1 + 0xa8) = lVar4;
    *(long *)(param_1 + 0x78) = param_2;
    *(long *)(param_1 + 0x80) = lVar2;
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0x98) + lVar4;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return 1;
}



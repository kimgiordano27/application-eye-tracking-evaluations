/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceQueryResult>$$LastIndexOf
ENTRY_POINT: 04bd8444
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceQueryResult>__LastIndexOf
               (ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar6;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0322bef4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x28);
  if (lVar1 != 0) {
    uVar2 = FUN_056d34dc(lVar1,*unaff_x20,unaff_x20[1],*(undefined8 *)PTR_DAT_075d96c0);
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
      if (lVar1 == 0) goto LAB_04bd8634;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar5 = unaff_x20[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      uVar2 = FUN_056d34dc(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f0));
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
        if (lVar1 == 0) goto LAB_04bd8634;
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *unaff_x20;
        uVar5 = unaff_x20[1];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4();
        }
        uVar2 = FUN_056d34dc(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
        if ((uVar2 & 1) == 0) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0322bef4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0322bef4();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0322bef4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0322bef4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
          if (lVar1 == 0) goto LAB_04bd8634;
          lVar3 = *(long *)(unaff_x19 + 0x20);
          uVar4 = *unaff_x20;
          uVar5 = unaff_x20[1];
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4();
          }
          uVar2 = FUN_056d34dc(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a8));
          if ((uVar2 & 1) == 0) {
            return;
          }
          thunk_FUN_03257e30(PTR_DAT_075a41b8);
          uVar4 = thunk_FUN_0322ed78();
          puVar6 = PTR_DAT_075d96f0;
        }
        else {
          thunk_FUN_03257e30(PTR_DAT_075a41b8);
          uVar4 = thunk_FUN_0322ed78();
          puVar6 = PTR_DAT_075d96e8;
        }
      }
      else {
        thunk_FUN_03257e30(PTR_DAT_075a41b8);
        uVar4 = thunk_FUN_0322ed78();
        puVar6 = PTR_DAT_075d96d8;
      }
    }
    else {
      thunk_FUN_03257e30(PTR_DAT_075a41b8);
      uVar4 = thunk_FUN_0322ed78();
      puVar6 = PTR_DAT_075d96d0;
    }
    uVar5 = thunk_FUN_03257e30(puVar6);
    uVar4 = FUN_05c7ecc4(uVar5,uVar4,0);
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar5 = thunk_FUN_0322f148();
    FUN_05e01578(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5);
  }
LAB_04bd8634:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



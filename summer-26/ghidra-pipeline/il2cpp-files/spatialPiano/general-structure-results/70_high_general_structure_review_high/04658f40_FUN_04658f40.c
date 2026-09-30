/*
FUNCTION_NAME: FUN_04658f40
ENTRY_POINT: 04658f40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


long FUN_04658f40(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  
  if ((DAT_06bb6c83 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cdc28);
    FUN_02f08768(PTR_DAT_067cc3f0);
    FUN_02f08768(PTR_DAT_067cc3f8);
    FUN_02f08768(PTR_DAT_067cdc30);
    FUN_02f08768(PTR_DAT_067cdbe0);
    DAT_06bb6c83 = 1;
  }
  local_58 = 0;
  plVar4 = (long *)FUN_04658604(param_1,*(undefined8 *)
                                         (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70));
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x6c8))(plVar4,0x34,*(undefined8 *)(*plVar4 + 0x6d0));
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x90);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x90);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c();
    }
    puVar3 = PTR_DAT_067cdc28;
    puVar2 = PTR_DAT_067cc3f0;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x90);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x90);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cc3f8);
      FUN_04e0200c(lVar8,uVar12,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xa0),
                   0);
      lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
      lVar6 = *(long *)(lVar9 + 0x90);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
        lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar6 + 0xb8) + 0x10) = lVar8;
      if ((*(ushort *)(*(long *)(lVar9 + 0x90) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
    }
    uVar5 = FUN_033a774c(uVar5,lVar8,*(undefined8 *)puVar2);
    lVar8 = FUN_033a45f0(uVar5,*(undefined8 *)puVar3);
    if ((*(long *)(param_1 + 0x38) != 0) && (lVar8 != 0)) {
      local_68 = (long)*(int *)(*(long *)(param_1 + 0x38) + 0x18);
      lStack_60 = (long)*(int *)(lVar8 + 0x18);
      lVar6 = FUN_02f08814(*(undefined8 *)PTR_DAT_067cdc30,&local_68);
      puVar2 = PTR_DAT_067cdbe0;
      lVar9 = *(long *)(param_1 + 0x38);
      if (lVar9 != 0) {
        uVar10 = 0;
        do {
          if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar10) {
            return lVar6;
          }
          lVar13 = (long)(int)uVar10;
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_object>__set_destroyOnRemoval:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
          if (lVar9 == 0) break;
          uVar7 = FUN_05cba690(lVar9,0);
          lVar9 = *(long *)(param_1 + 0x38);
          if ((uVar7 & 1) == 0) {
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar10)
            goto 
            UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_object>__set_destroyOnRemoval;
            lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
            if (lVar9 == 0) break;
            lVar9 = *(long *)(lVar9 + 0x30);
          }
          else {
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar10)
            goto 
            UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_object>__set_destroyOnRemoval;
            lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
            if (lVar9 == 0) break;
            lVar9 = FUN_05cba344(lVar9,0);
          }
          uVar5 = FUN_04658604(param_1,*(undefined8 *)
                                        (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70));
          if (lVar9 == 0) break;
          uVar7 = FUN_035eae20(lVar9,uVar5,&local_58,*(undefined8 *)puVar2);
          if (((uVar7 & 1) != 0) && (0 < (int)*(ulong *)(lVar8 + 0x18))) {
            uVar14 = 0;
            uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar14)
              goto 
              UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_object>__set_destroyOnRemoval;
              plVar4 = (long *)FUN_04658814(uVar7,local_58,
                                            *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8));
              if (plVar4 == (long *)0x0)
              goto 
              UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_object>__SetSessionRelativeData;
              uVar7 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
              if ((uVar7 & 1) == 0) {
                plVar4 = (long *)0x0;
              }
              if (lVar6 == 0)
              goto 
              UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_object>__SetSessionRelativeData;
              if ((**(uint **)(lVar6 + 0x10) <= uVar10) ||
                 (uVar11 = *(ulong *)(*(uint **)(lVar6 + 0x10) + 4), (uVar11 & 0xffffffff) <= uVar14
                 )) goto 
                    UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_object>__set_destroyOnRemoval
                    ;
              lVar9 = uVar14 + lVar13 * uVar11;
              uVar1 = *(uint *)(lVar8 + 0x18);
              uVar11 = (ulong)uVar1;
              uVar14 = uVar14 + 1;
              *(long **)(lVar6 + lVar9 * 8 + 0x20) = plVar4;
            } while ((long)uVar14 < (long)(int)uVar1);
          }
          lVar9 = *(long *)(param_1 + 0x38);
          uVar10 = uVar10 + 1;
          if (lVar9 == 0) break;
        } while( true );
      }
    }
  }
UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_object>__SetSessionRelativeData:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



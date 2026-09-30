/*
FUNCTION_NAME: FUN_0415418c
ENTRY_POINT: 0415418c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x041546a4) */
/* WARNING: Removing unreachable block (ram,0x0415475c) */

void FUN_0415418c(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_170 [88];
  undefined1 auStack_118 [88];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0484094c & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458bb78);
    thunk_FUN_01efb3a4(PTR_DAT_0458bc20);
    thunk_FUN_01efb3a4(PTR_DAT_0458bc28);
    thunk_FUN_01efb3a4(PTR_DAT_0458bc30);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458bb80);
    thunk_FUN_01efb3a4(PTR_DAT_0458ba40);
    thunk_FUN_01efb3a4(PTR_DAT_0458bc18);
    thunk_FUN_01efb3a4(PTR_DAT_0458bc38);
    DAT_0484094c = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uVar5 = FUN_04154818(param_1,param_2);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_04154364;
  uVar5 = FUN_02ee8304(*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_0458bc30);
  if ((uVar5 & 1) != 0) {
    if (param_2 == 0) goto LAB_04154364;
    *(undefined8 *)(param_2 + 0x2a4) = 0;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (iVar2 = FUN_04153ca8(), puVar1 = PTR_DAT_0458bc18, param_2 == 0)) goto LAB_04154364;
  lVar6 = *(long *)(param_2 + 0x3b8);
  if (lVar6 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar3)
      goto UnityEngine_UIElements_UxmlRootElementFactory___ctor;
      lVar6 = FUN_030f28e4(lVar6,iVar3,*(undefined8 *)puVar1);
      if (lVar6 == 0) break;
      lVar7 = FUN_042404bc(lVar6,0);
      if (lVar7 != 0) {
        lVar7 = FUN_042404bc(lVar6,0);
        if (lVar7 == 0) break;
        iVar13 = 0;
        while (iVar13 < *(int *)(lVar7 + 0x18)) {
          lVar14 = *(long *)(param_1 + 0x38);
          lVar7 = FUN_042404bc(lVar6,0);
          if ((lVar7 == 0) ||
             (uVar8 = FUN_030f28e4(lVar7,iVar13,*(undefined8 *)puVar1), lVar14 == 0))
          goto LAB_04154364;
          FUN_04153e18(lVar14,uVar8);
          iVar13 = iVar13 + 1;
          lVar7 = FUN_042404bc(lVar6,0);
          if (lVar7 == 0) goto LAB_04154364;
        }
      }
      if (*(long *)(param_1 + 0x38) == 0) break;
      FUN_04153e18(*(long *)(param_1 + 0x38),lVar6);
      lVar6 = *(long *)(param_2 + 0x3b8);
      iVar3 = iVar3 + 1;
    } while (lVar6 != 0);
    goto LAB_04154364;
  }
UnityEngine_UIElements_UxmlRootElementFactory___ctor:
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_04154364;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  uVar8 = FUN_04219978(param_2,0);
  iVar3 = FUN_041fe738(uVar8,0);
  lVar6 = *(long *)(param_1 + 0x38);
  if ((uVar5 & 1) == 0) {
    if (lVar6 == 0) goto LAB_04154364;
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x318);
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x18));
  }
  else {
    if (lVar6 == 0) goto LAB_04154364;
    *(long *)(lVar6 + 0x20) = param_2;
    thunk_FUN_01f51358((long *)(lVar6 + 0x20),param_2);
    FUN_0418c318(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),iVar2 + -1,0);
    FUN_0415489c(auStack_118,param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    memcpy(&local_c0,auStack_118,0x58);
    FUN_04202f80(auStack_170,&local_c0,0);
    uVar5 = FUN_04228284(param_2,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_2 + 0x3b0) == 0) goto LAB_04154364;
      FUN_0421fe74(*(long *)(param_2 + 0x3b0),&local_c0,0);
    }
    puVar1 = PTR_DAT_0458bb78;
    if (*(int *)(*(long *)PTR_DAT_0458bb78 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0421b6dc(&local_c0,0);
    uVar5 = FUN_042223a0(param_2,0);
    if ((uVar5 & 1) != 0) {
      uVar8 = FUN_04219978(param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar5 = FUN_0421c2a0(uVar8,&local_c0,0);
      if ((uVar5 & 1) == 0) {
        FUN_04153598(param_1,param_2,&local_c0);
      }
    }
    uVar5 = FUN_041fe790(&local_c0,0);
    if (((uVar5 & 1) == 0) || (uVar5 = FUN_04221704(param_2,0), (uVar5 & 1) == 0)) {
      FUN_0422ba70(param_2,&local_c0,0);
    }
    else {
      uVar8 = FUN_04219978(param_2,0);
      FUN_04155068(uVar8,param_2,uVar8,&local_c0);
      FUN_0422ba70(param_2,&local_c0,0);
      FUN_0415513c(param_1,param_2);
    }
    FUN_04203098(&local_c0,0);
    FUN_04228294(param_2,1,0);
    uVar8 = FUN_04219978(param_2,0);
    uVar4 = FUN_027648b0(uVar8,*(undefined8 *)PTR_DAT_0458bc38);
    *(undefined4 *)(param_2 + 800) = uVar4;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_04154364;
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    *puVar9 = 0;
    thunk_FUN_01f51358(puVar9,0);
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) goto LAB_04154364;
    iVar13 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar13) {
      FUN_0358d1e4(*(undefined8 *)(lVar6 + 0x10),0,iVar13,0);
    }
    if (iVar3 < 1) {
      uVar8 = FUN_04219978(param_2,0);
      iVar3 = FUN_041fe738(uVar8,0);
      if (iVar3 < 1) goto LAB_041546a8;
    }
    puVar1 = PTR_DAT_0458bc28;
    lVar6 = *(long *)PTR_DAT_0458bc28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    uVar5 = FUN_0422a494(param_2,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar10 = (long *)FUN_02df8f6c(*(undefined8 *)PTR_DAT_0458bc20);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar10,param_2,0);
      FUN_041d97d0(param_2,plVar10,0);
      lVar6 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0415468c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0415468c:
      (*(code *)*puVar9)(plVar10,puVar9[1]);
    }
  }
LAB_041546a8:
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar6 != 0)) {
    FUN_041c4888(lVar6,param_2,0);
    FUN_0417ce9c(param_1,param_2,param_3,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar6 != 0)) {
      FUN_041c4ab8(lVar6,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
        *puVar9 = uVar12;
        thunk_FUN_01f51358(puVar9,uVar12);
        if (*(long *)(param_1 + 0x38) != 0) {
          iVar3 = FUN_04153ca8();
          if (iVar2 < iVar3) {
            lVar6 = *(long *)(param_1 + 0x38);
            if (lVar6 == 0) goto LAB_04154364;
            iVar3 = FUN_04153ca8(lVar6);
            FUN_04153f18(lVar6,iVar2,iVar3 - iVar2);
          }
          return;
        }
      }
    }
  }
LAB_04154364:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



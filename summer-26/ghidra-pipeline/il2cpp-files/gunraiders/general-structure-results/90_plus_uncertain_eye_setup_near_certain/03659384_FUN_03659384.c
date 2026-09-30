/*
FUNCTION_NAME: FUN_03659384
ENTRY_POINT: 03659384
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03659964) */
/* WARNING: Removing unreachable block (ram,0x03659770) */
/* WARNING: Removing unreachable block (ram,0x03659818) */
/* WARNING: Removing unreachable block (ram,0x03659994) */
/* WARNING: Removing unreachable block (ram,0x0365984c) */

bool FUN_03659384(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,long *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_70 [16];
  
  if ((DAT_045383af & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_Component_GetComponent<OVRSceneVolume>__);
    FUN_01c5d288(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    FUN_01c5d288(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
                    /* try { // try from 036593e4 to 03759467 has its CatchHandler @ 036593e4
                       catch() { ... } // from try @ 036593e4 with catch @ 036593e4
                       catch() { ... } // from try @ 036595e8 with catch @ 036593e4
                       catch() { ... } // from try @ 0365964c with catch @ 036593e4
                       catch() { ... } // from try @ 036596c8 with catch @ 036593e4 */
    FUN_01c5d288(PTR_DAT_04230f30);
    FUN_01c5d288(Method_UnityEngine_Component_GetComponent<OVRScreenFade>__);
    DAT_045383af = 1;
  }
  auVar22 = FUN_036547dc();
  auVar23._8_8_ = local_70._8_8_;
  auVar23._0_8_ = local_70._0_8_;
  if ((auVar22._0_8_ == 0) ||
     (lVar20 = *(long *)(auVar22._0_8_ + 0x20), local_70 = auVar23, lVar20 == 0)) goto LAB_03659960;
  local_70 = (**(code **)(lVar20 + 0x18))
                       (*(undefined8 *)(lVar20 + 0x40),*(undefined8 *)(lVar20 + 0x28));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_70._8_8_;
  auVar22 = auVar5 << 0x40;
  if (*param_7 == 0) goto LAB_03659960;
  plVar10 = (long *)FUN_0397c1e4(*param_7,0);
  if (plVar10 == (long *)0x0) {
LAB_03659474:
    if (param_5 == 0) {
LAB_0365969c:
      *param_8 = *param_8 | 1;
      return false;
    }
    iVar8 = FUN_032a0fd4(param_5,0);
    if (iVar8 == 0) goto LAB_0365969c;
    plVar10 = (long *)0x0;
    bVar4 = true;
  }
  else {
    bVar3 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<OVRManager>__ + 0x130);
                    /* try { // try from 03659468 to 03759477 has its CatchHandler @ 0365967c */
    if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_UnityEngine_Component_GetComponent<OVRManager>__)) goto LAB_03659474;
    auVar23 = FUN_036547dc();
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar23._8_8_;
    auVar22 = auVar6 << 0x40;
    if (auVar23._0_8_ == 0) goto LAB_03659960;
    lVar21 = *(long *)(auVar23._0_8_ + 0x60);
    lVar20 = plVar10[4];
    auVar22 = FUN_0331c624(0,0);
    if (lVar21 == 0) goto LAB_03659960;
    lVar20 = (**(code **)(lVar21 + 0x18))
                       (*(undefined8 *)(lVar21 + 0x40),lVar20,auVar22._0_8_,local_70,
                        *(undefined8 *)(lVar21 + 0x28));
    auVar23 = FUN_036547dc();
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar23._8_8_;
    auVar22 = auVar7 << 0x40;
    if (auVar23._0_8_ == 0) goto LAB_03659960;
    if (lVar20 == *(long *)(auVar23._0_8_ + 0x10)) goto LAB_0365969c;
    bVar4 = false;
  }
  auVar22 = FUN_031532a8(param_3,0);
  if ((auVar22._0_8_ & 1) == 0) {
    if (param_3 == 0) goto LAB_03659960;
    iVar8 = FUN_031572ac(param_3,0x3a,0);
    lVar20 = param_3;
    if (0 < iVar8) {
      lVar20 = FUN_031548e4(param_3,0,iVar8,0);
    }
  }
  else {
    lVar20 = *(long *)PTR_DAT_04230f30;
    if (param_3 != 0) {
      lVar20 = param_3;
    }
  }
  auVar22 = FUN_036547dc();
  if ((auVar22._0_8_ != 0) && (lVar21 = *(long *)(auVar22._0_8_ + 0x68), lVar21 != 0)) {
    uVar11 = (**(code **)(lVar21 + 0x18))
                       (*(undefined8 *)(lVar21 + 0x40),local_70,*(undefined8 *)(lVar21 + 0x28));
    if (bVar4) {
      lVar21 = FUN_036547dc();
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar21 = *(long *)(lVar21 + 0x68);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar12 = (**(code **)(lVar21 + 0x18))
                         (*(undefined8 *)(lVar21 + 0x40),local_70,*(undefined8 *)(lVar21 + 0x28));
      FUN_03654454(uVar12,param_5,local_70);
      lVar21 = FUN_036547dc();
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar21 = *(long *)(lVar21 + 0x58);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar21 = (**(code **)(lVar21 + 0x18))
                         (*(undefined8 *)(lVar21 + 0x40),uVar12,local_70,
                          *(undefined8 *)(lVar21 + 0x28));
    }
    else {
      lVar21 = plVar10[4];
      uVar12 = 0;
    }
    plVar10 = (long *)FUN_03170924(0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar20 = (**(code **)(*plVar10 + 0x268))(plVar10,lVar20,*(undefined8 *)(*plVar10 + 0x270));
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(long *)(*(long *)(param_2 + 0x18) + 0x30) == 0) {
      if (lVar20 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if (*(int *)(lVar20 + 0x18) != 0) {
          lVar13 = lVar20 + 0x20;
        }
      }
      lVar16 = FUN_036547dc();
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar16 = *(long *)(lVar16 + 0x90);
      uVar14 = FUN_0331c624(*(undefined4 *)(lVar20 + 0x18),0);
      uVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<OVRScreenFade>__);
      FUN_03654a7c(uVar15,0,*(undefined8 *)
                             Method_UnityEngine_Component_GetComponent<OVRSceneVolume>__);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar9 = (**(code **)(lVar16 + 0x18))
                        (*(undefined8 *)(lVar16 + 0x40),lVar21,lVar13,uVar14,uVar15,uVar11,local_70,
                         *(undefined8 *)(lVar16 + 0x28));
    }
    else {
      lVar13 = FUN_036547dc();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *(long *)(lVar13 + 0x68);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar14 = (**(code **)(lVar13 + 0x18))
                         (*(undefined8 *)(lVar13 + 0x40),local_70,*(undefined8 *)(lVar13 + 0x28));
      if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03654454(uVar14,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30),local_70);
      lVar13 = FUN_036547dc();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *(long *)(lVar13 + 0x58);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar15 = (**(code **)(lVar13 + 0x18))
                         (*(undefined8 *)(lVar13 + 0x40),uVar14,local_70,
                          *(undefined8 *)(lVar13 + 0x28));
      if (lVar20 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if (*(int *)(lVar20 + 0x18) != 0) {
          lVar13 = lVar20 + 0x20;
        }
      }
      lVar16 = FUN_036547dc();
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar16 = *(long *)(lVar16 + 0x98);
      uVar17 = FUN_0331c624(*(undefined4 *)(lVar20 + 0x18),0);
      uVar18 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<OVRScreenFade>__);
      FUN_03654a7c(uVar18,0,*(undefined8 *)
                             Method_UnityEngine_Component_GetComponent<OVRSceneVolume>__);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar9 = (**(code **)(lVar16 + 0x18))
                        (*(undefined8 *)(lVar16 + 0x40),lVar21,uVar15,lVar13,uVar17,uVar18,uVar11,
                         local_70,*(undefined8 *)(lVar16 + 0x28));
      lVar20 = FUN_036547dc();
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar20 = *(long *)(lVar20 + 0x88);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(lVar20 + 0x18))
                (*(undefined8 *)(lVar20 + 0x40),uVar14,*(undefined8 *)(lVar20 + 0x28));
    }
    auVar22 = FUN_036547dc();
    if ((auVar22._0_8_ != 0) && (lVar20 = *(long *)(auVar22._0_8_ + 0x88), lVar20 != 0)) {
      (**(code **)(lVar20 + 0x18))
                (*(undefined8 *)(lVar20 + 0x40),uVar12,*(undefined8 *)(lVar20 + 0x28));
      if (*param_7 != 0) {
        FUN_0397c40c(*param_7,0);
      }
      plVar10 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                            Method_UnityEngine_Component_GetComponent<OVRManager>__)
      ;
      FUN_03659cb0(plVar10,uVar11,local_70,1);
      lVar20 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<OVRMesh>__);
      uVar11 = FUN_0397c2ec(lVar20,plVar10,0);
      *param_7 = lVar20;
      if (uVar9 == 0xffffffff) {
        *param_8 = 4;
        uVar19 = 0x20;
      }
      else if (uVar9 == 0) {
        uVar19 = 0;
        *param_8 = 0;
      }
      else {
        uVar1 = uVar9 >> 1 & 2;
        uVar2 = (uVar9 & 4) << 3;
        if (uVar9 != 4) {
          uVar1 = uVar1 | 4;
        }
        if ((uVar9 & 8) != 0) {
          uVar2 = 0x20;
        }
        uVar19 = (ulong)(uVar9 & 1 | (uVar9 >> 1 & 1) << 2 | uVar2);
        *param_8 = uVar1;
      }
      auVar22._8_8_ = uVar19;
      auVar22._0_8_ = uVar11;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x1d8))(plVar10,uVar19,*(undefined8 *)(*plVar10 + 0x1e0));
        if (uVar9 != 0) {
          return false;
        }
        return local_70._4_4_ == 0;
      }
    }
  }
LAB_03659960:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4(auVar22._0_8_,auVar22._8_8_);
}



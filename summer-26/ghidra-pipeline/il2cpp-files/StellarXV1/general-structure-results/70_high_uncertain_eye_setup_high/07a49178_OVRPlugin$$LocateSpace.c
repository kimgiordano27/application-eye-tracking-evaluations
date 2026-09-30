/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 07a49178
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LocateSpace(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
                    /* try { // try from 07a49178 to 07b49183 has its CatchHandler @ 07a4887c */
                    /* catch() { ... } // from try @ 07a490c4 with catch @ 07a49180
                       catch() { ... } // from try @ 07a4911c with catch @ 07a49180
                       catch() { ... } // from try @ 07a49170 with catch @ 07a49180 */
                    /* try { // try from 07a49184 to 07b492d3 has its CatchHandler @ 07a49184
                       catch() { ... } // from try @ 07a49184 with catch @ 07a49184
                       catch() { ... } // from try @ 07a49508 with catch @ 07a49184
                       catch() { ... } // from try @ 07a49598 with catch @ 07a49184
                       catch() { ... } // from try @ 07a495e0 with catch @ 07a49184
                       catch() { ... } // from try @ 07a49684 with catch @ 07a49184
                       catch() { ... } // from try @ 07a49700 with catch @ 07a49184
                       catch() { ... } // from try @ 07a497ac with catch @ 07a49184
                       catch() { ... } // from try @ 07a497ec with catch @ 07a49184
                       catch() { ... } // from try @ 07a49810 with catch @ 07a49184 */
  if ((DAT_09895371 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed030);
    DAT_09895371 = 1;
  }
  puVar1 = PTR_DAT_092ed030;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_58 = 0;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092ed030) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
          goto LAB_07a4921c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092ed030,0x12);
LAB_07a4921c:
    uVar7 = (*(code *)*puVar4)(param_2,&local_50,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      lVar6 = *param_2;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_07a49280;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(param_2,lVar5,0xd);
LAB_07a49280:
      uVar7 = (*(code *)*puVar4)(param_2,&local_58,puVar4[1]);
      uVar2 = local_58;
      if ((uVar7 & 1) != 0) {
        lVar6 = *param_2;
        lVar9 = *(long *)(param_1 + 0x18);
        uStack_6c = CONCAT44(local_38,uStack_3c);
        lVar5 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uStack_78 = uStack_48;
        local_80 = local_50;
        uStack_74 = uStack_44;
        uStack_70 = local_40;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07a492f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(param_2,lVar5,0);
LAB_07a492f8:
        uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (lVar9 == 0) goto LAB_07a4935c;
        uStack_98 = uStack_78;
        local_a0 = local_80;
        uStack_8c = uStack_6c;
        uStack_94 = uStack_74;
        uStack_90 = uStack_70;
        FUN_07a49360(lVar9,uVar2,&local_a0,uVar3);
        uVar7 = (ulong)*(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
          uVar7 = FUN_07a489b4();
          *(int *)(param_1 + 0x10) = (int)uVar7;
        }
        FUN_07a48a18(uVar7,*(undefined8 *)(param_1 + 0x18));
      }
    }
    return;
  }
LAB_07a4935c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



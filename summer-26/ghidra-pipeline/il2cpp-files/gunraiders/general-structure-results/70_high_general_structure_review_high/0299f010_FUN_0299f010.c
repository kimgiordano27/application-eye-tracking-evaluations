/*
FUNCTION_NAME: FUN_0299f010
ENTRY_POINT: 0299f010
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


bool FUN_0299f010(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long *param_5,long *param_6,long param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float local_24;
  
  uVar15 = param_4._4_4_;
  fVar9 = param_4._0_4_;
  uVar14 = param_3._4_4_;
  uVar12 = param_3._0_4_;
  if ((DAT_045310da & 1) == 0) {
                    /* try { // try from 0299f044 to 02a9f06b has its CatchHandler @ 0299f080 */
    FUN_01c5d288(PickedUpWeapons_TypeInfo);
    FUN_01c5d288(UnityEngine_Physics2D_TypeInfo);
    FUN_01c5d288(UnityEngine_PhysicsScene_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
                    /* try { // try from 0299f06c to 02a9f077 has its CatchHandler @ 0299eb94 */
    DAT_045310da = 1;
  }
  local_24 = 0.0;
                    /* try { // try from 0299f078 to 02a9f07f has its CatchHandler @ 0299f080 */
  if (param_6 == (long *)0x0) goto LAB_0299f42c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0299f044 with catch @ 0299f080
                       catch(type#2 @ 00000000) { ... } // from try @ 0299f078 with catch @ 0299f080
                        */
  if ((int)param_6[4] == -1) {
    return false;
  }
  if ((char)param_6[5] != '\0') {
    return false;
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_0299f42c;
  FUN_03f11ff8(lVar1,0);
  if (0x7f800000 < (uint)ABS(fVar9)) {
    return false;
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_0299f42c;
  FUN_03f11ff8(lVar1,0);
  if (fVar9 == 0.0) {
    return false;
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_0299f42c;
  FUN_03f11ff8(lVar1,0);
  fVar16 = fVar9;
  fVar8 = (float)FUN_0299b128(param_5);
  if (fVar9 < fVar8) {
    lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
    if (lVar1 == 0) goto LAB_0299f42c;
    FUN_03f11ff8(lVar1,0);
    *(float *)(param_5 + 0x14) = fVar16;
    if (param_5[2] == 0) goto LAB_0299f42c;
    FUN_03f11ff8(param_5[2],0);
    (**(code **)(*param_5 + 0x1c8))
              (CONCAT44(uVar14,uVar12),CONCAT44(uVar15,fVar16),param_5,
               *(undefined8 *)(*param_5 + 0x1d0));
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_0299f42c;
  FUN_03f11ff8(lVar1,0);
  fVar9 = fVar16;
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if ((lVar1 == 0) || (plVar2 = (long *)FUN_03f06988(lVar1,0), plVar2 == (long *)0x0))
  goto LAB_0299f42c;
  lVar1 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 0x1f) * 0x10 + 0x138);
        goto LAB_0299f1f8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01c72498(plVar2,*(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo,
                        0x1f);
LAB_0299f1f8:
  fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
  if (param_5[0xd] == 0) goto LAB_0299f42c;
  uVar6 = FUN_028b7e8c(param_5[0xd],(int)param_6[4],&local_24,
                       *(undefined8 *)PickedUpWeapons_TypeInfo);
  if ((uVar6 & 1) == 0) {
    uVar10 = FUN_0299b128(param_5);
  }
  else {
    uVar10 = (**(code **)(*param_5 + 0x1f8))
                       (param_5,(int)param_6[4],*(undefined8 *)(*param_5 + 0x200));
  }
  if (param_5[0xf] == 0) goto LAB_0299f42c;
  fVar16 = fVar16 - fVar8;
  if (*(int *)(param_5[0xf] + 0x20) == 0) {
    if (fVar16 <= (float)uVar10) {
      fVar8 = (float)FUN_0299b318(param_5,*(undefined8 *)
                                           (*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x98));
      if ((param_5[2] == 0) || (lVar1 = *(long *)(param_5[2] + 0x418), lVar1 == 0))
      goto LAB_0299f42c;
      FUN_03f11ff8(lVar1,0);
      fVar8 = fVar8 - fVar9;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (fVar8 <= 0.0) {
        bVar4 = false;
      }
      else {
        lVar1 = FUN_0271915c(param_5,*(undefined8 *)
                                      (*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x10));
        if (((lVar1 == 0) || (param_5[2] == 0)) ||
           (lVar5 = *(long *)(param_5[2] + 0x428), lVar5 == 0)) goto LAB_0299f42c;
        fVar8 = *(float *)(lVar1 + 0x14);
        fVar9 = (float)FUN_03ea9a98(lVar5,0);
        bVar4 = (fVar16 - (float)uVar10) + fVar9 <= fVar8;
      }
      *(bool *)(param_5 + 0x11) = bVar4;
    }
    else {
      *(undefined1 *)(param_5 + 0x11) = 0;
    }
  }
  fVar9 = local_24;
  if ((uVar6 & 1) == 0) {
LAB_0299f390:
    FUN_0299e510(fVar16,param_5,(int)param_6[4],
                 *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x210));
    FUN_0299d2d4(uVar10,fVar16,param_5,
                 *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x218));
    lVar1 = param_5[0xf];
    if (lVar1 == 0) goto LAB_0299f42c;
    if (*(int *)(lVar1 + 0x20) == 0) {
      return true;
    }
  }
  else {
    if (DAT_0452da2f == '\0') {
      FUN_01c5d288(PTR_DAT_04230558);
      DAT_0452da2f = '\x01';
    }
    fVar13 = ABS(fVar9);
    fVar8 = ABS(fVar16);
    if (ABS(fVar16) <= fVar13) {
      fVar8 = fVar13;
    }
    fVar11 = **(float **)(*(long *)PTR_DAT_04230558 + 0xb8) * 8.0;
    fVar13 = fVar8 * DAT_00b93308;
    if (fVar8 * DAT_00b93308 <= fVar11) {
      fVar13 = fVar11;
    }
    if (fVar13 <= ABS(fVar9 - fVar16)) goto LAB_0299f390;
    lVar1 = param_5[0xf];
    if (lVar1 == 0) goto LAB_0299f42c;
  }
  uVar6 = FUN_02b941a8(lVar1,(int)param_6[4],*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if (param_5[0xf] != 0) {
    return *(int *)(param_5[0xf] + 0x20) == 0;
  }
LAB_0299f42c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Deserialize
ENTRY_POINT: 031b3cf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  int iVar6;
  uint uVar7;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long lVar8;
  
  do {
    if (param_1 == 0) {
LAB_031b3d70:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b3d58 with catch @ 031b3d70 */
      FUN_01f08a3c();
    }
    uVar7 = (uint)unaff_x21;
    if ((*(uint *)(param_1 + 0x18) <= uVar7) || (*(uint *)(param_1 + 0x18) <= unaff_w23)) {
LAB_031b3d74:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar5 = (undefined8 *)(param_1 + 0x20 + (int)uVar7 * unaff_x22);
    uVar1 = *(undefined4 *)(puVar5 + 1);
                    /* try { // try from 031b3d28 to 032b3d2b has its CatchHandler @ 031b3d34 */
    puVar3 = (undefined8 *)(param_1 + 0x20 + (int)unaff_w23 * unaff_x22);
                    /* try { // try from 031b3d2c to 032b3d57 has its CatchHandler @ 031b38a4 */
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = uVar1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031b3d28 with catch @ 031b3d34
                        */
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031b3c5c with catch @ 031b3d38
                        */
    unaff_w23 = unaff_w23 + 1;
    unaff_x21 = (ulong)(uVar7 + 1);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031b3ba4 with catch @ 031b3d3c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031b3be4 with catch @ 031b3d40
                        */
    do {
      iVar6 = (int)unaff_x21;
      if ((int)uVar4 <= iVar6) {
                    /* try { // try from 031b3d58 to 032b3d5b has its CatchHandler @ 031b3d70 */
        *(uint *)(unaff_x19 + 0x18) = unaff_w23;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)uVar4 - unaff_w23;
      }
      uVar4 = unaff_x21 & 0xffffffff;
      unaff_x21 = (ulong)iVar6;
      lVar8 = ((-(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar4 << 1) + (long)iVar6) * 4;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_031b3d70;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x21) goto LAB_031b3d74;
        if (unaff_x20 == 0) goto LAB_031b3d70;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + lVar8 + 0x20),
                           *(undefined4 *)(lVar2 + lVar8 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
        lVar8 = lVar8 + 0xc;
      } while ((long)unaff_x21 < (long)uVar4);
    } while ((int)uVar4 <= (int)unaff_x21);
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while( true );
}


